#ifndef __UI_MENU_H
#define	__UI_MENU_H

#include "stm32f10x.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

typedef struct
{
 char * ItemString;
 u8 DefaultPos;
 u8 ItemNum;
 u8 FastSpeed;
}UI_Menu_Param_Struct;

#endif /* __UI_MENU_H */