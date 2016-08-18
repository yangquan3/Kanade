//File Name     UI_Clocks.c
//Description : Clock UI

#include "SSD1306.h" 

#include "UI_Clock.h" 

typedef struct
{
	char Character;
	u8 FontCode[48];
}Digit_1624_t;

typedef struct
{
	char Character;
	u8 FontCode[24];
}Digit_1216_t;

const Digit_1624_t DigitsCodeTab[] =
{
{'0',0x00,0x00,0x00,0x01,0xFF,0x80,0x07,0xFF,0xE0,0x1E,0x00,0xF8,0x38,0x00,0x1C,0x30,0x00,0x0C,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x30,0x00,0x0C,0x38,0x00,0x1C,0x1E,0x00,0xF8,0x07,0xFF,0xE0,0x01,0xFF,0x80,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\0.bmp",0*/
{'1',0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFE,0x7F,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\1.bmp",0*/
{'2',0x00,0x00,0x00,0x07,0x00,0x1E,0x0F,0x00,0x7E,0x1C,0x00,0xF6,0x38,0x01,0xC6,0x70,0x03,0x86,0x60,0x07,0x06,0x60,0x06,0x06,0x60,0x0E,0x06,0x60,0x0C,0x06,0x70,0x1C,0x06,0x30,0x38,0x06,0x3C,0x70,0x06,0x0F,0xE0,0x06,0x03,0xC0,0x06,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\2.bmp",0*/
{'3',0x00,0x00,0x00,0x60,0x00,0x60,0x60,0x00,0x70,0x60,0x00,0x38,0x60,0x00,0x1C,0x60,0x00,0x0C,0x60,0x00,0x0E,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0xE0,0x06,0x63,0xF0,0x0E,0x6F,0xB8,0x1C,0x7E,0x1E,0x78,0x78,0x0F,0xF0,0x70,0x07,0xC0,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\3.bmp",0*/
{'4',0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x03,0xC0,0x00,0x0F,0xC0,0x00,0x3E,0xC0,0x00,0xF8,0xC0,0x03,0xE0,0xC0,0x0F,0x80,0xC0,0x3E,0x00,0xC0,0x7F,0xFF,0xFE,0x7F,0xFF,0xFE,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\4.bmp",0*/
{'5',0x00,0x00,0x00,0x7F,0xE0,0x30,0x7F,0xE0,0x38,0x60,0x60,0x1C,0x60,0x60,0x0C,0x60,0xC0,0x0E,0x60,0xC0,0x06,0x60,0xC0,0x06,0x60,0xC0,0x06,0x60,0xC0,0x06,0x60,0xE0,0x0E,0x60,0x70,0x1C,0x60,0x3C,0x78,0x60,0x1F,0xF0,0x00,0x07,0xC0,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\5.bmp",0*/
{'6',0x00,0x00,0x00,0x00,0x07,0xC0,0x00,0x1F,0xF0,0x00,0x7C,0x38,0x01,0xF8,0x1C,0x07,0xF0,0x0C,0x1F,0x60,0x06,0x7C,0x60,0x06,0x70,0x60,0x06,0x00,0x60,0x06,0x00,0x30,0x0C,0x00,0x38,0x1C,0x00,0x1C,0x38,0x00,0x0F,0xF0,0x00,0x07,0xC0,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\6.bmp",0*/
{'7',0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x0E,0x60,0x00,0x7E,0x60,0x03,0xF8,0x60,0x1F,0xC0,0x60,0xFE,0x00,0x67,0xF0,0x00,0x7F,0x80,0x00,0x7C,0x00,0x00,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\7.bmp",0*/
{'8',0x00,0x00,0x00,0x00,0x03,0xE0,0x0F,0x87,0xF0,0x1F,0xEE,0x38,0x38,0xFC,0x1C,0x70,0x78,0x0C,0x60,0x30,0x06,0x60,0x30,0x06,0x60,0x30,0x06,0x60,0x30,0x06,0x70,0x78,0x0C,0x38,0xFC,0x1C,0x3F,0xEE,0x38,0x0F,0x87,0xF0,0x00,0x03,0xE0,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\8.bmp",0*/
{'9',0x00,0x00,0x00,0x03,0xE0,0x00,0x0F,0xF0,0x00,0x1C,0x38,0x00,0x38,0x1C,0x00,0x30,0x0C,0x00,0x60,0x06,0x00,0x60,0x06,0x0E,0x60,0x06,0x3E,0x60,0x06,0xF8,0x30,0x0F,0xE0,0x38,0x1F,0x80,0x1C,0x3E,0x00,0x0F,0xF8,0x00,0x03,0xE0,0x00,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\9.bmp",0*/
{':',0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x01,0xC0,0x07,0x01,0xC0,0x07,0x01,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\10.bmp",0*/
};

const Digit_1216_t SmallDigitsCodeTab[] =
{
{'0',0x00,0x00,0x0F,0xF0,0x3F,0xFC,0x70,0x0E,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0x70,0x0E,0x3F,0xFC,0x0F,0xF0,0x00,0x00},/*"E:\Kanade\Clock Digits\1216\0.bmp",0*/
{'1',0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\1216\1.BMP",0*/
{'2',0x00,0x00,0x10,0x07,0x38,0x1F,0x70,0x3B,0xE0,0x33,0xC0,0x63,0xC0,0xE3,0xC1,0xC3,0x63,0x83,0x7F,0x03,0x1E,0x03,0x00,0x00},/*"E:\Kanade\Clock Digits\1216\2.BMP",0*/
{'3',0x00,0x00,0xC0,0x08,0xC0,0x1C,0xC0,0x0E,0xC0,0x07,0xC0,0x03,0xC3,0x03,0xCF,0xC7,0xDC,0xCE,0xF8,0x7C,0xE0,0x38,0x00,0x00},/*"E:\Kanade\Clock Digits\1216\3.BMP",0*/
{'4',0x00,0x00,0x00,0x60,0x01,0xE0,0x07,0xE0,0x1E,0x60,0x78,0x60,0xFF,0xFF,0xFF,0xFF,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00},/*"E:\Kanade\Clock Digits\1216\4.BMP",0*/
{'5',0x00,0x00,0xFF,0x04,0xFF,0x0E,0xC3,0x07,0xC6,0x03,0xC6,0x03,0xC6,0x03,0xC6,0x03,0xC3,0x07,0xC3,0xFE,0x01,0xFC,0x00,0x00},/*"E:\Kanade\Clock Digits\1216\5.BMP",0*/
{'6',0x00,0x00,0x03,0xF8,0x0F,0xFE,0x3D,0xC6,0x79,0x83,0xE1,0x83,0x41,0x83,0x01,0x83,0x01,0xC6,0x00,0xFE,0x00,0x78,0x00,0x00},/*"E:\Kanade\Clock Digits\1216\6.BMP",0*/
{'7',0x00,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x0F,0xC0,0x7F,0xC3,0xF0,0xDF,0x80,0xFC,0x00,0xF0,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\1216\7.BMP",0*/
{'8',0x00,0x00,0x3C,0x7C,0x7E,0xFE,0xE7,0xC7,0xC3,0x83,0xC3,0x83,0xC3,0x83,0xC3,0x83,0xE7,0xC7,0x7E,0xFE,0x3C,0x7C,0x00,0x00},/*"E:\Kanade\Clock Digits\1216\8.BMP",0*/
{'9',0x00,0x00,0x1E,0x00,0x7F,0x00,0x63,0x80,0xC1,0x82,0xC1,0x87,0xC1,0x9E,0xC1,0xBC,0x63,0xF0,0x7F,0xE0,0x1F,0x80,0x00,0x00},/*"E:\Kanade\Clock Digits\1216\9.bmp",0*/
{'-',0x00,0x00,0x00,0x00,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x00,0x00,0x00,0x00},/*"E:\Kanade\Clock Digits\1216\-.bmp",0*/
};

/**
  * @brief  Get index of a char in DigitsCodeTab

	  @retval None
  */
u16 GetCharacterIndexIn1624CodeTab(char chr)
{
	u16 pos;
	for (pos = 0; pos < sizeof(DigitsCodeTab) / sizeof(Digit_1624_t); pos++)
	{
		if (DigitsCodeTab[pos].Character == chr) break;
	}
	return pos;
}


/**
  * @brief  Show a 1624 charater at (x,y)

	  @retval None
  */
void OLED_Show1624Char(u8 x, u8 y, char chr)
{
	u8 t, t1;
	u8 temp;
	u16 index = GetCharacterIndexIn1624CodeTab(chr);
	unsigned char  y0 = y;
	for (t = 0; t < 48; t++)
	{
		temp = DigitsCodeTab[index].FontCode[t];

		for (t1 = 0; t1 < 8; t1++)
		{
			if (temp & 0x80)OLED_DrawPoint(x, y, 1);
			else OLED_DrawPoint(x, y, 0);
			temp <<= 1;
			y++;
			if ((y - y0) == 24)
			{
				y = y0;
				x++;
				break;
			}
		}
	}
}

/**
  * @brief  Show a 1624 string at (x,y)

	  @retval None
  */
void OLED_Show1624String(u8 x, u8 y, char* string)
{
	u8 x2 = x;
	while (*string != 0)
	{
		OLED_Show1624Char(x2, y, *string);
		x2 += 16;
		string++;
	}
}

/**
  * @brief  Get index of a char in SmallDigitsCodeTab

	  @retval None
  */
u16 GetCharacterIndexIn1216CodeTab(char chr)
{
	u16 pos;
	for (pos = 0; pos < sizeof(SmallDigitsCodeTab) / sizeof(Digit_1216_t); pos++)
	{
		if (SmallDigitsCodeTab[pos].Character == chr) break;
	}
	return pos;
}


/**
  * @brief  Show a 1216 charater at (x,y)

	  @retval None
  */
void OLED_Show1216Char(u8 x, u8 y, char chr)
{
	u8 t, t1;
	u8 temp;
	u16 index = GetCharacterIndexIn1216CodeTab(chr);
	unsigned char  y0 = y;
	for (t = 0; t < 24; t++)
	{
		temp = SmallDigitsCodeTab[index].FontCode[t];

		for (t1 = 0; t1 < 8; t1++)
		{
			if (temp & 0x80)OLED_DrawPoint(x, y, 1);
			else OLED_DrawPoint(x, y, 0);
			temp <<= 1;
			y++;
			if ((y - y0) == 16)
			{
				y = y0;
				x++;
				break;
			}
		}
	}
}

/**
  * @brief  Show a 1216 string at (x,y)

	  @retval None
  */
void OLED_Show1216String(u8 x, u8 y, char* string)
{
	u8 x2 = x;
	while (*string != 0)
	{
		OLED_Show1216Char(x2, y, *string);
		x2 += 12;
		string++;
	}
}
