//File Name     BadApplePlayer.c
//Description : BadApplePlayer 

#include <string.h>
#include <stdio.h>

#include "FreeRTOS_Standard_Include.h"

#include "sdcardff.h" 
#include "sdcard.h" 
#include "ff.h" 

#include "SSD1306.h"
#include "CPU_Usage.h" 

#include "BadApplePlayer.h"

#define BAD_APPLE_PLAYER_PRIORITY tskIDLE_PRIORITY+5

static void BadApplePlayer(void *pvParameters)
{
	FRESULT res;
	FIL video;
	portTickType xLastWakeTime;
	u32 currentAddr;
	u32 maxAddr;
	u32 fileSize;
	u32 dataRead = 0;
	char tempString[7];
	u8 frame[1024];
	res = f_open(&video, "0:/BadApple.bin", FA_READ);
	if (res != FR_OK)
	{
		if (SDCardMountStatus != true) OLED_ShowString(0, 0, "No Memory");
		else OLED_ShowString(0, 0, "No File");
		vTaskDelete(NULL);
	}
	fileSize = f_size(&video);
	maxAddr = fileSize / 1024;
	xLastWakeTime = xTaskGetTickCount();
	UpdateOLEDJustNow = true;
	while (1)
	{
		for (currentAddr = 0; currentAddr < maxAddr; currentAddr++)
		{
			res = f_read(&video, frame, 1024, &dataRead);
			if (res != FR_OK)
			{
				goto ReadFileFailed;
			}
			Draw_BMP(0, 0, 128, 7, frame);
			if (CPU_Stat_Running == true)
			{
				if (OSCPUUsage < 100)
					sprintf(tempString, "%04.1f%%", OSCPUUsage);
				else
					strcpy(tempString, "FULL");
				OLED_ShowAnyString(0, 0, tempString, NotOnSelect, 12);
			}
			f_lseek(&video, currentAddr * 1024);
			vTaskDelayUntil(&xLastWakeTime, 30 / portTICK_RATE_MS);
		}
		f_lseek(&video, 0);
		dataRead = 0;
	}
ReadFileFailed:
	{
		OLED_ShowString(0, 0, "File Read Failed");
		vTaskDelete(NULL);
	}
}

void BadApplePlayer_Init()
{
	xTaskCreate(BadApplePlayer, "Bad Apple Player",
		768, NULL, BAD_APPLE_PLAYER_PRIORITY, NULL);
}



