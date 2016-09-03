#ifndef __EXCEPTIONHANDLE_H
#define	__EXCEPTIONHANDLE_H

#include "stm32f10x.h"
#include "LegacyTest.h"

#define SYSTEM_OVERHEAT_TEMPERATURE 75

#define SYSTEM_OVERHEAT_RECOVER_TEMPERATURE 70

void ApplicationNewFailed(const char * appName);

void ApplicationFatalError(const char* appName,const char* errorString);

void ShowFault(char * string);

void System_OverHeat_Exception_Handler(u8 status,Legacy_Test_Param_Struct* params);

void ShowDetailedFault(char* string);

#endif /* __EXCEPTIONHANDLE_H */
