#ifndef __SETTINGS_H
#define	__SETTINGS_H

#include "stm32f10x.h"
#include <stdbool.h>

#define FLASH_SETTINGS_BLOCK 0x0803b800
#define FLASH_SETTINGS_ADDR 0x0803b800

void Settings(void);

void Settings_Init(void);

typedef struct
{
 bool ClockEnable;
 u16 IdleTime;
}Idle_Clock_Settings_Struct;

typedef struct 
{
 u16 InternalTemperature_Max;
 u16 ExternalTemperature_Max;
 u16 Protection_Resume_Gap;
}Protect_Settings_Struct;

typedef struct
{
 u8 Language;
 Protect_Settings_Struct Protect_Settings;
 Idle_Clock_Settings_Struct Idle_Clock_Settings;
 u8 Digital_Load_Params_Mode;
}Settings_Struct;

extern Settings_Struct* CurrentSettings;

extern Settings_Struct SettingsBkp;

void GetNecessarySettings(void);

void SaveSettings(void);

#endif /* __SETTINGS_H */
