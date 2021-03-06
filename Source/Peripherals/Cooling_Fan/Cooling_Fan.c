//File Name   Cooling_Fan.c
//Description Cooling_Fan App 

#include "stm32f10x_gpio.h"

#include "FreeRTOS_Standard_Include.h"

#include "Temperature_Sensors.h"

#include "Cooling_Fan.h"

#define COOLING_FAN_SERVICE_PRIORITY tskIDLE_PRIORITY+6
#define COOLING_FAN_TURN_ON_TEMPERATURE 50
#define COOLING_FAN_TURN_OFF_TEMPERATURE 45

#define Cooling_fan_turn_on() GPIO_SetBits(GPIOA, GPIO_Pin_15)
#define Cooling_fan_turn_off() GPIO_ResetBits(GPIOA, GPIO_Pin_15)

xQueueHandle CoolingFan_Command;

/**
  * @brief  Init GPIO of the cooling fan
  */
static void Cooling_Fan_GPIO_Init()
{
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
}

/**
  * @brief  Cooling fan service
  */
static void Cooling_Fan_Service(void *pvParameters)
{
	u8 command;
	u8 mode = Auto;

  /*Delay to avoid the wrong temperature on startup*/
	vTaskDelay(5000 / portTICK_RATE_MS);
	for (;;)
	{
    /*If mode is auto,turn on and turn off the fan according to MOS temperature*/
		if (mode == Auto)
		{
			if (MOSTemperature > COOLING_FAN_TURN_ON_TEMPERATURE)Cooling_fan_turn_on();
			if (MOSTemperature < COOLING_FAN_TURN_OFF_TEMPERATURE)Cooling_fan_turn_off();
		}
		if (xQueueReceive(CoolingFan_Command, &command, 500 / portTICK_RATE_MS) == pdPASS)
		{
			switch (command)
			{
			case Turn_On:mode = 0; Cooling_fan_turn_on(); break;
			case Turn_Off:mode = 0; Cooling_fan_turn_off(); break;
			case Auto:mode = Auto;
			}
		}
	}
}

/**
  * @brief  Cooling fan service init
  */
void Cooling_Fan_Service_Init(void)
{
	Cooling_fan_turn_off();
	Cooling_Fan_GPIO_Init();
	CoolingFan_Command = xQueueCreate(2, sizeof(u8));
	CreateTaskWithExceptionControl(Cooling_Fan_Service, "Cooling_Fan_Service",
		128, NULL, COOLING_FAN_SERVICE_PRIORITY, NULL);
}

/**
  * @brief  Send a command to cooling fan
  */
void Fan_Send_Command(u8 command)
{
	xQueueSend(CoolingFan_Command, &command, 100 / portTICK_RATE_MS);
}
