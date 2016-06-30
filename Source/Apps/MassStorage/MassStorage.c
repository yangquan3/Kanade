//File Name   MassStorage.c
//Description MassStorage App

#include "stm32f10x.h"
#include <stdio.h>

#include "stm32f10x_rtc.h"

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

#include "mass_mal.h"
#include "usb_pwr.h"
#include "usb_lib.h"
#include "LED.h"
#include "SSD1306.h"

#include "MassStorage.h"

#include "MultiLanguageStrings.h"

#include "Settings.h"

#include "UI_Dialogue.h"
#include "UI_Button.h"

const LEDAnimateSliceStruct MAL_Read_Animate[] =
{
 {Cyan,50,6,false},//Cyan with brightness of 6
 {Cyan,50,0,false},//Black
 {0,0,0,END}//End of the animation
};

const LEDAnimateSliceStruct MAL_Write_Animate[] =
{
 {Red,50,6,false},//Red with brightness of 2
 {Red,50,0,false},//Black
 {0,0,0,END}//End of the animation
};

void MassStorage_App()
{
	bool success;
	u8 i;
	u8 status;
	UI_Button_Param_Struct button_params;
	OLED_PositionStruct position[4] = { {68,44} };
	success = MAL_Mount();
	if (!success)
	{
		ShowSmallDialogue(SettingsMountFailed_Str[CurrentSettings->Language], 1000, true);
		return;
	}
	ShowDialogue(USBMassStorage_Str[CurrentSettings->Language], 
	USBMassStorageStatus_Str[CurrentSettings->Language], "");
	/*Set the positions for the voltage options*/
	button_params.ButtonString = UnMountUSBMassStorage_Str[CurrentSettings->Language];
	button_params.ButtonNum = 1;
	button_params.DefaultValue = 0;
	button_params.Positions = position;
	UI_Button_Init(&button_params);
	for (;;)
	{
		if (xQueueReceive(UI_ButtonMsg, &i, 0) == pdPASS) break;
		if (status != Usb_Status_Reg)
		{
			if (Usb_Status_Reg & 0x01)
			{
				LED_Animate_Init(MAL_Write_Animate);
				OLED_ShowAnyString(60,16,
				USBMassStorageStatusWriting_Str[CurrentSettings->Language],NotOnSelect,16);
			}
			else if (Usb_Status_Reg & 0x02)
			{
				LED_Animate_Init(MAL_Read_Animate);
				OLED_ShowAnyString(60,16,
				USBMassStorageStatusReading_Str[CurrentSettings->Language],NotOnSelect,16);
			}
			else
			{
				LED_Animate_DeInit();
				OLED_ShowAnyString(60,16,
				USBMassStorageStatusIdling_Str[CurrentSettings->Language],NotOnSelect,16);
			}
			status = Usb_Status_Reg;
		}
		Usb_Status_Reg = 0;
		vTaskDelay(100 / portTICK_RATE_MS);
	}
	xSemaphoreTake(OLEDRelatedMutex, portMAX_DELAY);
	OLED_Clear();
	xSemaphoreGive(OLEDRelatedMutex);
	LED_Animate_DeInit();
	PowerOff();
	UI_Button_DeInit();
}
