#include "Japanchinese.h"

const RB2312Font JapanchineseTab12[] = {
{"系",0x00,0x10,0x41,0x20,0x49,0x40,0x5B,0x00,0x6B,0x10,0x4D,0xF0,0x8D,0x00,0x89,0x00,0x91,0x40,0x83,0x20,0x01,0x90,0x00,0x00},/*"系",0*/
{"统",0x19,0x20,0x2B,0x20,0xCD,0x40,0x11,0x40,0x00,0x10,0x26,0x20,0x2B,0xC0,0xB2,0x00,0x63,0xE0,0x2A,0x10,0x27,0x30,0x00,0x00},/*"统",1*/
{"初",0x21,0x00,0xA2,0x00,0x6F,0xF0,0x32,0x00,0x05,0x10,0x40,0x60,0x7F,0x80,0x40,0x00,0x40,0x10,0x40,0x10,0x7F,0xE0,0x00,0x00},/*"初",2*/
{"始",0x11,0x10,0x1E,0xA0,0xF0,0x40,0x1F,0xB0,0x00,0x00,0x1B,0xF0,0x2A,0x20,0xCA,0x20,0x0A,0x20,0x1B,0xF0,0x0C,0x00,0x00,0x00},/*"始",3*/
{"化",0x04,0x00,0x08,0x00,0x3F,0xF0,0xC0,0x00,0x00,0x80,0x01,0x00,0xFF,0xE0,0x04,0x10,0x08,0x10,0x10,0x10,0x20,0x70,0x00,0x00},/*"化",4*/
{"容",0x62,0x00,0x42,0x00,0x55,0xF0,0x65,0x20,0x49,0x20,0xD1,0x20,0x49,0x20,0x65,0x20,0x55,0xF0,0x42,0x00,0x62,0x00,0x00,0x00},/*"容",5*/
{"量",0x10,0x10,0xFF,0x50,0x95,0x50,0x95,0x50,0x95,0x50,0xDF,0xF0,0xB5,0x50,0x95,0x50,0x95,0x50,0xFF,0x50,0x10,0x10,0x00,0x00},/*"量",6*/
{"没",0x08,0x20,0x84,0x40,0x40,0x90,0x14,0x10,0xE7,0x20,0x84,0xA0,0x84,0x40,0x84,0xA0,0xE5,0x20,0x16,0x10,0x10,0x10,0x00,0x00},/*"没",7*/
{"有",0x22,0x00,0x24,0x00,0x2F,0xF0,0x3A,0x80,0xEA,0x80,0x2A,0x80,0x2A,0x80,0x2A,0x80,0x2A,0x90,0x2F,0xF0,0x20,0x00,0x00,0x00},/*"有",8*/
{"卡",0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0xFF,0xF0,0x25,0x00,0x25,0x00,0x24,0x80,0x24,0x80,0x24,0x40,0x04,0x00,0x00,0x00},/*"卡",9*/
{"等",0x22,0x80,0xCA,0x80,0x4A,0xC0,0x6A,0xA0,0x4A,0x80,0x3E,0x90,0xCA,0x90,0x4B,0xF0,0x6A,0x80,0x4A,0x80,0x42,0x80,0x00,0x00},/*"等",10*/
{"待",0x12,0x00,0x24,0x00,0x4F,0xF0,0x90,0x00,0x0A,0x00,0x2A,0x80,0x2A,0x50,0xFA,0x10,0x2F,0xF0,0x2A,0x00,0x0A,0x00,0x00,0x00},/*"待",11*/
{"设",0x08,0x00,0x88,0x00,0x4F,0xE0,0x00,0x40,0x0A,0x10,0xF3,0x10,0x82,0xA0,0x82,0x40,0xF2,0xA0,0x0B,0x10,0x08,0x10,0x00,0x00},/*"设",12*/
{"备",0x04,0x00,0x24,0x00,0x4B,0xF0,0xEA,0xA0,0x52,0xA0,0x53,0xE0,0x52,0xA0,0x6A,0xA0,0x4B,0xF0,0x04,0x00,0x04,0x00,0x00,0x00},/*"备",13*/
{"已",0x00,0x00,0x4F,0xE0,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0x7E,0x10,0x00,0x70,0x00,0x00},/*"已",14*/
{"连",0x84,0x10,0x47,0xE0,0x00,0x10,0x20,0x90,0x2C,0x90,0x34,0x90,0xE4,0x90,0x2F,0xF0,0x24,0x90,0x24,0x90,0x20,0x90,0x00,0x00},/*"连",15*/
{"接",0x11,0x00,0x11,0x10,0xFF,0xF0,0x12,0x00,0x25,0x10,0x35,0x50,0xAD,0xD0,0x67,0x20,0x2D,0x20,0x35,0xD0,0x25,0x10,0x00,0x00},/*"接",16*/
{"确",0x42,0x00,0x4F,0xE0,0x74,0x40,0x47,0xE0,0x00,0x10,0x2F,0xE0,0xCA,0x80,0x4F,0xE0,0x5A,0x80,0x6A,0x90,0x0F,0xF0,0x00,0x00},/*"确",17*/
{"认",0x08,0x00,0x88,0x00,0x4F,0xE0,0x00,0x40,0x00,0x90,0x00,0x60,0x03,0x80,0xFC,0x00,0x03,0x80,0x00,0x60,0x00,0x10,0x00,0x00},/*"认",18*/
{"取",0x40,0x40,0x7F,0xC0,0x4A,0x40,0x4A,0x40,0x7F,0xF0,0x40,0x80,0x20,0x10,0x3F,0x20,0x20,0xC0,0x3F,0x20,0x00,0x10,0x00,0x00},/*"取",19*/
{"消",0x08,0x20,0x44,0x40,0x20,0x80,0x00,0x00,0x4F,0xF0,0x2A,0x80,0x0A,0x80,0xFA,0x80,0x0A,0x80,0x2A,0x90,0x4F,0xF0,0x00,0x00},/*"消",20*/

{"？",0x00,0x00,0x30,0x00,0x70,0x00,0x87,0x60,0x8F,0x60,0x78,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"？",21*/
};

const RB2312Font16 JapanchineseTab16[]={
{"开",0x01,0x00,0x41,0x01,0x41,0x02,0x41,0x0C,0x7F,0xF0,0x41,0x00,0x41,0x00,0x41,0x00,0x41,0x00,0x41,0x00,0x7F,0xFF,0x41,0x00,0x41,0x00,0x41,0x00,0x01,0x00,0x00,0x00},/*"开",0*/
{"始",0x08,0x02,0x08,0x44,0x0F,0xA8,0xF8,0x10,0x08,0x68,0x0F,0x84,0x00,0x00,0x02,0x00,0x07,0x7F,0x1A,0x42,0xE2,0x42,0x02,0x42,0x0A,0x42,0x06,0x7F,0x03,0x00,0x00,0x00},/*"始",1*/
{"记",0x02,0x00,0x02,0x00,0x42,0x00,0x33,0xFE,0x00,0x04,0x00,0x08,0x00,0x00,0x21,0xFC,0x21,0x02,0x21,0x02,0x21,0x02,0x21,0x02,0x3F,0x82,0x00,0x02,0x00,0x0E,0x00,0x00},/*"记",2*/
{"录",0x01,0x02,0x01,0x02,0x41,0x44,0x49,0x24,0x49,0x08,0x49,0x12,0x49,0x01,0x49,0xFE,0x49,0x20,0x49,0x10,0x49,0x18,0x7F,0x24,0x01,0x44,0x01,0x02,0x01,0x02,0x00,0x00},/*"录",3*/
{"曲",0x00,0x00,0x0F,0xFF,0x08,0x42,0x08,0x42,0x08,0x42,0xFF,0xFE,0x08,0x42,0x08,0x42,0x08,0x42,0xFF,0xFE,0x08,0x42,0x08,0x42,0x08,0x42,0x0F,0xFF,0x00,0x00,0x00,0x00},/*"曲",4*/
{"线",0x04,0x44,0x0C,0xE6,0x35,0x44,0xC6,0x48,0x04,0x48,0x18,0x48,0x01,0x02,0x09,0x02,0x09,0x04,0xFF,0xC8,0x09,0x30,0x92,0x28,0x52,0x44,0x12,0x82,0x02,0x1F,0x00,0x00},/*"线",5*/
{"触",0x08,0x01,0x37,0xFE,0xE4,0x90,0x2F,0xFC,0x34,0x91,0x07,0xFF,0x00,0x04,0x1F,0xC6,0x10,0x84,0x10,0x84,0xFF,0xFC,0x10,0x84,0x10,0x94,0x1F,0xCC,0x00,0x06,0x00,0x00},/*"触",6*/
{"发",0x00,0x00,0x00,0x04,0x18,0x08,0x68,0x31,0x08,0xC1,0x0B,0x01,0x1D,0x82,0xE9,0x62,0x09,0x14,0x09,0x08,0x09,0x14,0x49,0x22,0x29,0xC2,0x08,0x01,0x00,0x01,0x00,0x00},/*"发",7*/
{"已",0x00,0x00,0x00,0x00,0x47,0xFC,0x41,0x02,0x41,0x02,0x41,0x02,0x41,0x02,0x41,0x02,0x41,0x02,0x41,0x02,0x41,0x02,0x7F,0x02,0x00,0x02,0x00,0x1E,0x00,0x00,0x00,0x00},/*"已",8*/
{"保",0x00,0x80,0x01,0x00,0x06,0x00,0x1F,0xFF,0xE0,0x04,0x00,0x88,0x7C,0x90,0x44,0xA0,0x44,0xC0,0x47,0xFF,0x44,0xC0,0x44,0xA0,0x7C,0x90,0x00,0x88,0x00,0x04,0x00,0x00},/*"保",9*/
{"存",0x20,0x40,0x20,0x80,0x21,0x00,0x27,0xFF,0x38,0x00,0xE0,0x40,0x24,0x40,0x24,0x42,0x24,0x41,0x24,0xFE,0x25,0x40,0x26,0x40,0x24,0x40,0x20,0x40,0x20,0x40,0x00,0x00},/*"存",10*/
	
{"？",0x00,0x00,0x00,0x00,0x1C,0x00,0x2C,0x00,0x40,0x00,0x41,0xEC,0x43,0xEC,0x3E,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"？",11*/
};

u16 GetJapanchineseAddr(s8 *ptr, u8 size)
{
	u16 addr;
	if (size == 12)
		for (addr = 0; addr < sizeof(JapanchineseTab12) / sizeof(JapanchineseTab12[0]) - 1; addr++)
		{
			if ((*ptr == JapanchineseTab12[addr].Index[0]) && (*(ptr + 1) == JapanchineseTab12[addr].Index[1]))
			{
				break;
			}
		}
	else if(size==16)
	{
		for (addr = 0; addr < sizeof(JapanchineseTab16) / sizeof(JapanchineseTab16[0]) - 1; addr++)
		{
			if ((*ptr == JapanchineseTab16[addr].Index[0]) && (*(ptr + 1) == JapanchineseTab16[addr].Index[1]))
			{
				break;
			}
		}	 
	}
	return addr;
}













