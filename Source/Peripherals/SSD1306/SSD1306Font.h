//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途

//********************************************************************************

#ifndef __SSD1306FONT_H
#define __SSD1306FONT_H 	   

const unsigned char oled_asc2_1206[95][12] = {
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0x00,0xFC,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"!",1*/
{0x20,0x00,0xC0,0x00,0x20,0x00,0xC0,0x00,0x00,0x00,0x00,0x00},/*""",2*/
{0x20,0x80,0xFF,0xE0,0x20,0x80,0xFF,0xE0,0x20,0x80,0x00,0x00},/*"#",3*/
{0x31,0x80,0x48,0x40,0xFF,0xE0,0x44,0x40,0x33,0x80,0x00,0x00},/*"$",4*/
{0x60,0xC0,0x93,0x00,0x6D,0x80,0x32,0x40,0xC1,0x80,0x00,0x00},/*"%",5*/
{0x67,0x80,0x98,0x40,0x66,0x40,0x01,0x80,0x06,0x40,0x00,0x00},/*"&",6*/
{0x00,0x00,0xA0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x00,0x1F,0x00,0x60,0xC0,0x80,0x20,0x00,0x00,0x00,0x00},/*"(",8*/
{0x00,0x00,0x80,0x20,0x60,0xC0,0x1F,0x00,0x00,0x00,0x00,0x00},/*")",9*/
{0x1B,0x00,0x04,0x00,0x3F,0x80,0x04,0x00,0x1B,0x00,0x00,0x00},/*"*",10*/
{0x04,0x00,0x04,0x00,0x3F,0x80,0x04,0x00,0x04,0x00,0x00,0x00},/*"+",11*/
{0x00,0x00,0x00,0xA0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*",",12*/
{0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*".",14*/
{0x00,0x60,0x01,0x80,0x0E,0x00,0x30,0x00,0xC0,0x00,0x00,0x00},/*"/",15*/
{0x3F,0x80,0x40,0x40,0x40,0x40,0x3F,0x80,0x00,0x00,0x00,0x00},/*"0",16*/
{0x00,0x00,0x20,0x00,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"1",17*/
{0x30,0xC0,0x43,0x40,0x44,0x40,0x38,0x40,0x00,0x00,0x00,0x00},/*"2",18*/
{0x31,0x80,0x44,0x40,0x44,0x40,0x3B,0x80,0x00,0x00,0x00,0x00},/*"3",19*/
{0x03,0x00,0x0D,0x00,0x31,0x00,0x7F,0xC0,0x01,0x00,0x00,0x00},/*"4",20*/
{0x7D,0x80,0x48,0x40,0x48,0x40,0x47,0x80,0x00,0x00,0x00,0x00},/*"5",21*/
{0x3F,0x80,0x44,0x40,0x44,0x40,0x33,0x80,0x00,0x00,0x00,0x00},/*"6",22*/
{0x40,0x00,0x41,0xC0,0x4E,0x00,0x70,0x00,0x00,0x00,0x00,0x00},/*"7",23*/
{0x3B,0x80,0x44,0x40,0x44,0x40,0x3B,0x80,0x00,0x00,0x00,0x00},/*"8",24*/
{0x39,0x80,0x44,0x40,0x44,0x40,0x3F,0x80,0x00,0x00,0x00,0x00},/*"9",25*/
{0x00,0x00,0x18,0xC0,0x18,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*":",26*/
{0x00,0x00,0x18,0xA0,0x18,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*";",27*/
{0x04,0x00,0x0A,0x00,0x11,0x00,0x20,0x80,0x40,0x40,0x00,0x00},/*"<",28*/
{0x12,0x00,0x12,0x00,0x12,0x00,0x12,0x00,0x00,0x00,0x00,0x00},/*"=",29*/
{0x40,0x40,0x20,0x80,0x11,0x00,0x0A,0x00,0x04,0x00,0x00,0x00},/*">",30*/
{0x30,0x00,0x40,0x00,0x46,0xC0,0x38,0x00,0x00,0x00,0x00,0x00},/*"?",31*/
{0x3F,0x80,0x52,0x40,0x5E,0x40,0x41,0x40,0x3E,0x80,0x00,0x00},/*"@",32*/
{0x03,0xC0,0x1D,0x00,0x61,0x00,0x1D,0x00,0x03,0xC0,0x00,0x00},/*"A",33*/
{0x7F,0xC0,0x44,0x40,0x44,0x40,0x44,0x40,0x3B,0x80,0x00,0x00},/*"B",34*/
{0x3F,0x80,0x40,0x40,0x40,0x40,0x40,0x40,0x31,0x80,0x00,0x00},/*"C",35*/
{0x7F,0xC0,0x40,0x40,0x40,0x40,0x20,0x80,0x1F,0x00,0x00,0x00},/*"D",36*/
{0x7F,0xC0,0x44,0x40,0x44,0x40,0x44,0x40,0x40,0x40,0x00,0x00},/*"E",37*/
{0x7F,0xC0,0x44,0x00,0x44,0x00,0x44,0x00,0x40,0x00,0x00,0x00},/*"F",38*/
{0x3F,0x80,0x40,0x40,0x40,0x40,0x42,0x80,0x33,0xC0,0x00,0x00},/*"G",39*/
{0x7F,0xC0,0x04,0x00,0x04,0x00,0x04,0x00,0x7F,0xC0,0x00,0x00},/*"H",40*/
{0x00,0x00,0x40,0x40,0x7F,0xC0,0x40,0x40,0x00,0x00,0x00,0x00},/*"I",41*/
{0x01,0x80,0x00,0x40,0x00,0x40,0x7F,0x80,0x00,0x00,0x00,0x00},/*"J",42*/
{0x7F,0xC0,0x04,0x00,0x1B,0x00,0x60,0xC0,0x00,0x00,0x00,0x00},/*"K",43*/
{0x7F,0xC0,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x00},/*"L",44*/
{0x7F,0xC0,0x1C,0x00,0x03,0xC0,0x1C,0x00,0x7F,0xC0,0x00,0x00},/*"M",45*/
{0x7F,0xC0,0x30,0x00,0x0E,0x00,0x01,0x80,0x7F,0xC0,0x00,0x00},/*"N",46*/
{0x3F,0x80,0x40,0x40,0x40,0x40,0x40,0x40,0x3F,0x80,0x00,0x00},/*"O",47*/
{0x7F,0xC0,0x44,0x00,0x44,0x00,0x44,0x00,0x38,0x00,0x00,0x00},/*"P",48*/
{0x3F,0x80,0x40,0x40,0x41,0x40,0x40,0x80,0x3F,0x40,0x00,0x00},/*"Q",49*/
{0x7F,0xC0,0x44,0x00,0x44,0x00,0x46,0x00,0x39,0xC0,0x00,0x00},/*"R",50*/
{0x31,0x80,0x48,0x40,0x44,0x40,0x42,0x40,0x31,0x80,0x00,0x00},/*"S",51*/
{0x40,0x00,0x40,0x00,0x7F,0xC0,0x40,0x00,0x40,0x00,0x00,0x00},/*"T",52*/
{0x7F,0x80,0x00,0x40,0x00,0x40,0x00,0x40,0x7F,0x80,0x00,0x00},/*"U",53*/
{0x70,0x00,0x0E,0x00,0x01,0xC0,0x0E,0x00,0x70,0x00,0x00,0x00},/*"V",54*/
{0x7C,0x00,0x03,0xC0,0x7C,0x00,0x03,0xC0,0x7C,0x00,0x00,0x00},/*"W",55*/
{0x60,0xC0,0x1B,0x00,0x04,0x00,0x1B,0x00,0x60,0xC0,0x00,0x00},/*"X",56*/
{0x60,0x00,0x18,0x00,0x07,0xC0,0x18,0x00,0x60,0x00,0x00,0x00},/*"Y",57*/
{0x40,0xC0,0x43,0x40,0x44,0x40,0x58,0x40,0x60,0x40,0x00,0x00},/*"Z",58*/
{0x00,0x00,0x00,0x00,0xFF,0xE0,0x80,0x20,0x80,0x20,0x00,0x00},/*"[",59*/
{0x65,0x00,0x1D,0x00,0x07,0xC0,0x1D,0x00,0x65,0x00,0x00,0x00},/*"\",60*/
{0x80,0x20,0x80,0x20,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},/*"]",61*/
{0x00,0x00,0x40,0x00,0x80,0x00,0x40,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10},/*"_",63*/
{0x00,0x00,0x80,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x05,0x80,0x0A,0x40,0x0A,0x40,0x07,0x80,0x00,0x40,0x00,0x00},/*"a",65*/
{0x7F,0xC0,0x08,0x40,0x08,0x40,0x08,0x40,0x07,0x80,0x00,0x00},/*"b",66*/
{0x07,0x80,0x08,0x40,0x08,0x40,0x08,0x40,0x04,0x80,0x00,0x00},/*"c",67*/
{0x07,0x80,0x08,0x40,0x08,0x40,0x08,0x40,0x7F,0xC0,0x00,0x00},/*"d",68*/
{0x07,0x80,0x0A,0x40,0x0A,0x40,0x0A,0x40,0x06,0x80,0x00,0x00},/*"e",69*/
{0x08,0x00,0x3F,0xC0,0x48,0x00,0x40,0x00,0x00,0x00,0x00,0x00},/*"f",70*/
{0x05,0x40,0x0A,0xA0,0x0A,0xA0,0x04,0xA0,0x08,0x40,0x00,0x00},/*"g",71*/
{0x7F,0xC0,0x08,0x00,0x08,0x00,0x08,0x00,0x07,0xC0,0x00,0x00},/*"h",72*/
{0x00,0x00,0x00,0x00,0x6F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"i",73*/
{0x00,0x20,0x00,0x20,0x6F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"j",74*/
{0x7F,0xC0,0x01,0x00,0x03,0x00,0x04,0x80,0x08,0x40,0x00,0x00},/*"k",75*/
{0x00,0x00,0x00,0x00,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00},/*"l",76*/
{0x0F,0xC0,0x08,0x00,0x07,0xC0,0x08,0x00,0x07,0xC0,0x00,0x00},/*"m",77*/
{0x0F,0xC0,0x08,0x00,0x08,0x00,0x08,0x00,0x07,0xC0,0x00,0x00},/*"n",78*/
{0x07,0x80,0x08,0x40,0x08,0x40,0x08,0x40,0x07,0x80,0x00,0x00},/*"o",79*/
{0x0F,0xE0,0x08,0x80,0x08,0x80,0x08,0x80,0x07,0x00,0x00,0x00},/*"p",80*/
{0x07,0x00,0x08,0x80,0x08,0x80,0x08,0x80,0x0F,0xE0,0x00,0x00},/*"q",81*/
{0x00,0x00,0x0F,0xC0,0x04,0x00,0x08,0x00,0x08,0x00,0x00,0x00},/*"r",82*/
{0x04,0x80,0x0A,0x40,0x0A,0x40,0x09,0x40,0x04,0x80,0x00,0x00},/*"s",83*/
{0x08,0x00,0x7F,0x80,0x08,0x40,0x00,0x40,0x00,0x00,0x00,0x00},/*"t",84*/
{0x0F,0x80,0x00,0x40,0x00,0x40,0x00,0x40,0x0F,0xC0,0x00,0x00},/*"u",85*/
{0x0C,0x00,0x03,0x00,0x00,0xC0,0x03,0x00,0x0C,0x00,0x00,0x00},/*"v",86*/
{0x0E,0x00,0x01,0xC0,0x0E,0x00,0x01,0xC0,0x0E,0x00,0x00,0x00},/*"w",87*/
{0x08,0x40,0x04,0x80,0x03,0x00,0x04,0x80,0x08,0x40,0x00,0x00},/*"x",88*/
{0x0C,0x20,0x03,0x20,0x00,0xC0,0x03,0x00,0x0C,0x00,0x00,0x00},/*"y",89*/
{0x08,0x40,0x08,0xC0,0x09,0x40,0x0A,0x40,0x0C,0x40,0x00,0x00},/*"z",90*/
{0x00,0x00,0x04,0x00,0xFB,0xE0,0x80,0x20,0x00,0x00,0x00,0x00},/*"{",91*/
{0x00,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00},/*"|",92*/
{0x00,0x00,0x80,0x20,0xFB,0xE0,0x04,0x00,0x00,0x00,0x00,0x00},/*"}",93*/
{0x40,0x00,0x80,0x00,0x80,0x00,0x40,0x00,0x80,0x00,0x00,0x00},/*"~",94*/
};

const unsigned char oled_asc2_0705[95][5] =
{
{0x00, 0x00, 0x00, 0x00, 0x00},// (space)
{0x00, 0x00, 0x5F, 0x00, 0x00},// !
{0x00, 0x07, 0x00, 0x07, 0x00},// "
{0x14, 0x7F, 0x14, 0x7F, 0x14},// #
{0x24, 0x2A, 0x7F, 0x2A, 0x12},// $
{0x23, 0x13, 0x08, 0x64, 0x62},// %
{0x36, 0x49, 0x55, 0x22, 0x50},// &
{0x00, 0x05, 0x03, 0x00, 0x00},// '
{0x00, 0x1C, 0x22, 0x41, 0x00},// (
{0x00, 0x41, 0x22, 0x1C, 0x00},// )
{0x08, 0x2A, 0x1C, 0x2A, 0x08},// *
{0x08, 0x08, 0x3E, 0x08, 0x08},// +
{0x00, 0x50, 0x30, 0x00, 0x00},// ,
{0x08, 0x08, 0x08, 0x08, 0x08},// -
{0x00, 0x60, 0x60, 0x00, 0x00},// .
{0x20, 0x10, 0x08, 0x04, 0x02},// /
{0x3E, 0x51, 0x49, 0x45, 0x3E},// 0
{0x00, 0x42, 0x7F, 0x40, 0x00},// 1
{0x42, 0x61, 0x51, 0x49, 0x46},// 2
{0x21, 0x41, 0x45, 0x4B, 0x31},// 3
{0x18, 0x14, 0x12, 0x7F, 0x10},// 4
{0x27, 0x45, 0x45, 0x45, 0x39},// 5
{0x3C, 0x4A, 0x49, 0x49, 0x30},// 6
{0x01, 0x71, 0x09, 0x05, 0x03},// 7
{0x36, 0x49, 0x49, 0x49, 0x36},// 8
{0x06, 0x49, 0x49, 0x29, 0x1E},// 9
{0x00, 0x36, 0x36, 0x00, 0x00},// :
{0x00, 0x56, 0x36, 0x00, 0x00},// ;
{0x00, 0x08, 0x14, 0x22, 0x41},// <
{0x14, 0x14, 0x14, 0x14, 0x14},// =
{0x41, 0x22, 0x14, 0x08, 0x00},// >
{0x02, 0x01, 0x51, 0x09, 0x06},// ?
{0x32, 0x49, 0x79, 0x41, 0x3E},// @
{0x7E, 0x11, 0x11, 0x11, 0x7E},// A
{0x7F, 0x49, 0x49, 0x49, 0x36},// B
{0x3E, 0x41, 0x41, 0x41, 0x22},// C
{0x7F, 0x41, 0x41, 0x22, 0x1C},// D
{0x7F, 0x49, 0x49, 0x49, 0x41},// E
{0x7F, 0x09, 0x09, 0x01, 0x01},// F
{0x3E, 0x41, 0x41, 0x51, 0x32},// G
{0x7F, 0x08, 0x08, 0x08, 0x7F},// H
{0x00, 0x41, 0x7F, 0x41, 0x00},// I
{0x20, 0x40, 0x41, 0x3F, 0x01},// J
{0x7F, 0x08, 0x14, 0x22, 0x41},// K
{0x7F, 0x40, 0x40, 0x40, 0x40},// L
{0x7F, 0x02, 0x04, 0x02, 0x7F},// M
{0x7F, 0x04, 0x08, 0x10, 0x7F},// N
{0x3E, 0x41, 0x41, 0x41, 0x3E},// O
{0x7F, 0x09, 0x09, 0x09, 0x06},// P
{0x3E, 0x41, 0x51, 0x21, 0x5E},// Q
{0x7F, 0x09, 0x19, 0x29, 0x46},// R
{0x46, 0x49, 0x49, 0x49, 0x31},// S
{0x01, 0x01, 0x7F, 0x01, 0x01},// T
{0x3F, 0x40, 0x40, 0x40, 0x3F},// U
{0x1F, 0x20, 0x40, 0x20, 0x1F},// V
{0x7F, 0x20, 0x18, 0x20, 0x7F},// W
{0x63, 0x14, 0x08, 0x14, 0x63},// X
{0x03, 0x04, 0x78, 0x04, 0x03},// Y
{0x61, 0x51, 0x49, 0x45, 0x43},// Z
{0x00, 0x00, 0x7F, 0x41, 0x41},// [
{0x02, 0x04, 0x08, 0x10, 0x20},// "\"
{0x41, 0x41, 0x7F, 0x00, 0x00},// ]
{0x04, 0x02, 0x01, 0x02, 0x04},// ^
{0x40, 0x40, 0x40, 0x40, 0x40},// _
{0x00, 0x01, 0x02, 0x04, 0x00},// `
{0x20, 0x54, 0x54, 0x54, 0x78},// a
{0x7F, 0x48, 0x44, 0x44, 0x38},// b
{0x38, 0x44, 0x44, 0x44, 0x20},// c
{0x38, 0x44, 0x44, 0x48, 0x7F},// d
{0x38, 0x54, 0x54, 0x54, 0x18},// e
{0x08, 0x7E, 0x09, 0x01, 0x02},// f
{0x08, 0x14, 0x54, 0x54, 0x3C},// g
{0x7F, 0x08, 0x04, 0x04, 0x78},// h
{0x00, 0x44, 0x7D, 0x40, 0x00},// i
{0x20, 0x40, 0x44, 0x3D, 0x00},// j
{0x00, 0x7F, 0x10, 0x28, 0x44},// k
{0x00, 0x41, 0x7F, 0x40, 0x00},// l
{0x7C, 0x04, 0x18, 0x04, 0x78},// m
{0x7C, 0x08, 0x04, 0x04, 0x78},// n
{0x38, 0x44, 0x44, 0x44, 0x38},// o
{0x7C, 0x14, 0x14, 0x14, 0x08},// p
{0x08, 0x14, 0x14, 0x18, 0x7C},// q
{0x7C, 0x08, 0x04, 0x04, 0x08},// r
{0x48, 0x54, 0x54, 0x54, 0x20},// s
{0x04, 0x3F, 0x44, 0x40, 0x20},// t
{0x3C, 0x40, 0x40, 0x20, 0x7C},// u
{0x1C, 0x20, 0x40, 0x20, 0x1C},// v
{0x3C, 0x40, 0x30, 0x40, 0x3C},// w
{0x44, 0x28, 0x10, 0x28, 0x44},// x
{0x0C, 0x50, 0x50, 0x50, 0x3C},// y
{0x44, 0x64, 0x54, 0x4C, 0x44},// z
{0x00, 0x08, 0x36, 0x41, 0x00},// {
{0x00, 0x00, 0x7F, 0x00, 0x00},// |
{0x00, 0x41, 0x36, 0x08, 0x00},// }
};

const unsigned char oled_asc2_1608[95][16] = {
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xCC,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00},/*"!",1*/
{0x00,0x00,0x20,0x00,0xC0,0x00,0x80,0x00,0x20,0x00,0xC0,0x00,0x80,0x00,0x00,0x00},/*""",2*/
{0x04,0x20,0x07,0xFE,0x7C,0x20,0x04,0x20,0x07,0xFE,0x7C,0x20,0x04,0x00,0x00,0x00},/*"#",3*/
{0x18,0x30,0x24,0x08,0x42,0x04,0xFF,0xFE,0x41,0x04,0x20,0x88,0x18,0x70,0x00,0x00},/*"$",4*/
{0x38,0x0C,0x44,0x30,0x44,0xC0,0x39,0x38,0x06,0x44,0x18,0x44,0x60,0x38,0x00,0x00},/*"%",5*/
{0x00,0x78,0x3C,0x84,0x43,0x04,0x42,0xC8,0x3C,0x30,0x00,0xC8,0x00,0x04,0x00,0x00},/*"&",6*/
{0x00,0x00,0x00,0x00,0xD0,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
{0x00,0x00,0x00,0x00,0x0F,0xE0,0x30,0x18,0x40,0x04,0x80,0x02,0x00,0x00,0x00,0x00},/*"(",8*/
{0x00,0x00,0x80,0x02,0x40,0x04,0x30,0x18,0x0F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00},/*")",9*/
{0x08,0x20,0x04,0x40,0x02,0x80,0x1F,0xF0,0x02,0x80,0x04,0x40,0x08,0x20,0x00,0x00},/*"*",10*/
{0x01,0x00,0x01,0x00,0x01,0x00,0x0F,0xE0,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00},/*"+",11*/
{0x00,0x00,0x00,0x00,0x00,0x1A,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*",",12*/
{0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
{0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",14*/
{0x00,0x0C,0x00,0x30,0x00,0xC0,0x01,0x00,0x06,0x00,0x18,0x00,0x60,0x00,0x00,0x00},/*"/",15*/
{0x1F,0xF0,0x20,0x08,0x40,0x04,0x40,0x04,0x20,0x08,0x1F,0xF0,0x00,0x00,0x00,0x00},/*"0",16*/
{0x00,0x00,0x20,0x00,0x20,0x00,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"1",17*/
{0x18,0x0C,0x20,0x14,0x40,0x64,0x40,0x84,0x23,0x04,0x1C,0x04,0x00,0x00,0x00,0x00},/*"2",18*/
{0x18,0x30,0x20,0x08,0x41,0x04,0x41,0x04,0x22,0x88,0x1C,0x70,0x00,0x00,0x00,0x00},/*"3",19*/
{0x00,0x60,0x01,0xA0,0x06,0x20,0x18,0x20,0x7F,0xFC,0x00,0x20,0x00,0x00,0x00,0x00},/*"4",20*/
{0x7F,0x10,0x42,0x08,0x44,0x04,0x44,0x04,0x42,0x08,0x41,0xF0,0x00,0x00,0x00,0x00},/*"5",21*/
{0x1F,0xF0,0x21,0x08,0x42,0x04,0x42,0x04,0x21,0x08,0x18,0xF0,0x00,0x00,0x00,0x00},/*"6",22*/
{0x40,0x00,0x40,0x00,0x40,0x3C,0x41,0xC0,0x4E,0x00,0x70,0x00,0x00,0x00,0x00,0x00},/*"7",23*/
{0x1C,0x70,0x22,0x88,0x41,0x04,0x41,0x04,0x22,0x88,0x1C,0x70,0x00,0x00,0x00,0x00},/*"8",24*/
{0x1E,0x30,0x21,0x08,0x40,0x84,0x40,0x84,0x21,0x08,0x1F,0xF0,0x00,0x00,0x00,0x00},/*"9",25*/
{0x00,0x00,0x00,0x00,0x06,0x18,0x06,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*":",26*/
{0x00,0x00,0x00,0x00,0x06,0x1A,0x06,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*";",27*/
{0x01,0x00,0x02,0x80,0x04,0x40,0x08,0x20,0x10,0x10,0x20,0x08,0x00,0x00,0x00,0x00},/*"<",28*/
{0x00,0x00,0x04,0x40,0x04,0x40,0x04,0x40,0x04,0x40,0x04,0x40,0x00,0x00,0x00,0x00},/*"=",29*/
{0x20,0x08,0x10,0x10,0x08,0x20,0x04,0x40,0x02,0x80,0x01,0x00,0x00,0x00,0x00,0x00},/*">",30*/
{0x18,0x00,0x20,0x00,0x40,0xCC,0x41,0x0C,0x22,0x00,0x1C,0x00,0x00,0x00,0x00,0x00},/*"?",31*/
{0x1F,0xF0,0x20,0x08,0x47,0xC4,0x48,0x24,0x4F,0xE4,0x20,0x24,0x1F,0xC8,0x00,0x00},/*"@",32*/
{0x00,0x1C,0x01,0xE0,0x1E,0x20,0x60,0x20,0x1E,0x20,0x01,0xE0,0x00,0x1C,0x00,0x00},/*"A",33*/
{0x7F,0xFC,0x41,0x04,0x41,0x04,0x41,0x04,0x41,0x04,0x22,0x88,0x1C,0x70,0x00,0x00},/*"B",34*/
{0x1F,0xF0,0x20,0x08,0x40,0x04,0x40,0x04,0x40,0x04,0x20,0x08,0x18,0x30,0x00,0x00},/*"C",35*/
{0x7F,0xFC,0x40,0x04,0x40,0x04,0x40,0x04,0x40,0x04,0x20,0x08,0x1F,0xF0,0x00,0x00},/*"D",36*/
{0x7F,0xFC,0x41,0x04,0x41,0x04,0x41,0x04,0x41,0x04,0x41,0x04,0x40,0x04,0x00,0x00},/*"E",37*/
{0x7F,0xFC,0x41,0x00,0x41,0x00,0x41,0x00,0x41,0x00,0x41,0x00,0x40,0x00,0x00,0x00},/*"F",38*/
{0x1F,0xF0,0x20,0x08,0x40,0x04,0x40,0x04,0x40,0x84,0x20,0x88,0x18,0xFC,0x00,0x00},/*"G",39*/
{0x7F,0xFC,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x7F,0xFC,0x00,0x00},/*"H",40*/
{0x00,0x00,0x00,0x00,0x40,0x04,0x7F,0xFC,0x40,0x04,0x00,0x00,0x00,0x00,0x00,0x00},/*"I",41*/
{0x00,0x30,0x00,0x08,0x00,0x04,0x00,0x04,0x00,0x08,0x7F,0xF0,0x00,0x00,0x00,0x00},/*"J",42*/
{0x7F,0xFC,0x00,0x80,0x01,0x00,0x06,0x80,0x08,0x60,0x30,0x10,0x40,0x0C,0x00,0x00},/*"K",43*/
{0x7F,0xFC,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x00},/*"L",44*/
{0x7F,0xFC,0x1E,0x00,0x01,0xE0,0x00,0x1C,0x01,0xE0,0x1E,0x00,0x7F,0xFC,0x00,0x00},/*"M",45*/
{0x7F,0xFC,0x18,0x00,0x06,0x00,0x01,0x80,0x00,0x60,0x00,0x18,0x7F,0xFC,0x00,0x00},/*"N",46*/
{0x1F,0xF0,0x20,0x08,0x40,0x04,0x40,0x04,0x40,0x04,0x20,0x08,0x1F,0xF0,0x00,0x00},/*"O",47*/
{0x7F,0xFC,0x41,0x00,0x41,0x00,0x41,0x00,0x41,0x00,0x22,0x00,0x1C,0x00,0x00,0x00},/*"P",48*/
{0x1F,0xF0,0x20,0x08,0x40,0x04,0x40,0x24,0x40,0x14,0x20,0x08,0x1F,0xF4,0x00,0x00},/*"Q",49*/
{0x7F,0xFC,0x41,0x00,0x41,0x00,0x41,0x00,0x41,0xC0,0x22,0x30,0x1C,0x0C,0x00,0x00},/*"R",50*/
{0x1C,0x30,0x22,0x08,0x42,0x04,0x41,0x04,0x41,0x04,0x20,0x88,0x18,0x70,0x00,0x00},/*"S",51*/
{0x40,0x00,0x40,0x00,0x40,0x00,0x7F,0xFC,0x40,0x00,0x40,0x00,0x40,0x00,0x00,0x00},/*"T",52*/
{0x7F,0xF0,0x00,0x08,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x08,0x7F,0xF0,0x00,0x00},/*"U",53*/
{0x70,0x00,0x0F,0x00,0x00,0xE0,0x00,0x1C,0x00,0xE0,0x0F,0x00,0x70,0x00,0x00,0x00},/*"V",54*/
{0x7F,0x80,0x00,0x7C,0x07,0x80,0x78,0x00,0x07,0x80,0x00,0x7C,0x7F,0x80,0x00,0x00},/*"W",55*/
{0x60,0x0C,0x18,0x30,0x06,0xC0,0x01,0x00,0x06,0xC0,0x18,0x30,0x60,0x0C,0x00,0x00},/*"X",56*/
{0x60,0x00,0x18,0x00,0x06,0x00,0x01,0xFC,0x06,0x00,0x18,0x00,0x60,0x00,0x00,0x00},/*"Y",57*/
{0x40,0x0C,0x40,0x34,0x40,0xC4,0x41,0x04,0x46,0x04,0x58,0x04,0x60,0x04,0x00,0x00},/*"Z",58*/
{0x00,0x00,0xFF,0xFE,0x80,0x02,0x80,0x02,0x80,0x02,0x80,0x02,0x00,0x00,0x00,0x00},/*"[",59*/
{0x60,0x00,0x19,0x20,0x07,0x20,0x01,0xFC,0x07,0x20,0x19,0x20,0x60,0x00,0x00,0x00},/*"\",60*/
{0x00,0x00,0x80,0x02,0x80,0x02,0x80,0x02,0x80,0x02,0xFF,0xFE,0x00,0x00,0x00,0x00},/*"]",61*/
{0x00,0x00,0x20,0x00,0x40,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
{0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01},/*"_",63*/
{0x00,0x00,0x00,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
{0x01,0x18,0x02,0x24,0x02,0x44,0x02,0x44,0x02,0x48,0x01,0xFC,0x00,0x04,0x00,0x00},/*"a",65*/
{0x7F,0xFC,0x01,0x08,0x02,0x04,0x02,0x04,0x02,0x04,0x01,0x08,0x00,0xF0,0x00,0x00},/*"b",66*/
{0x00,0xF0,0x01,0x08,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x01,0x08,0x00,0x00},/*"c",67*/
{0x00,0xF0,0x01,0x08,0x02,0x04,0x02,0x04,0x02,0x04,0x01,0x08,0x7F,0xFC,0x00,0x00},/*"d",68*/
{0x00,0xF0,0x01,0x48,0x02,0x44,0x02,0x44,0x02,0x44,0x01,0x44,0x00,0xC8,0x00,0x00},/*"e",69*/
{0x02,0x00,0x02,0x00,0x3F,0xFC,0x42,0x00,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"f",70*/
{0x00,0x0C,0x01,0xB2,0x02,0x52,0x02,0x52,0x02,0x52,0x01,0x92,0x02,0x0C,0x00,0x00},/*"g",71*/
{0x7F,0xFC,0x01,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x01,0x00,0x00,0xFC,0x00,0x00},/*"h",72*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x33,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"i",73*/
{0x00,0x00,0x00,0x02,0x00,0x02,0x33,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"j",74*/
{0x7F,0xFC,0x00,0x20,0x00,0x40,0x00,0xA0,0x01,0x10,0x02,0x08,0x00,0x04,0x00,0x00},/*"k",75*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"l",76*/
{0x03,0xFC,0x01,0x00,0x02,0x00,0x01,0xFC,0x02,0x00,0x02,0x00,0x01,0xFC,0x00,0x00},/*"m",77*/
{0x03,0xFC,0x01,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x01,0x00,0x00,0xFC,0x00,0x00},/*"n",78*/
{0x00,0xF0,0x01,0x08,0x02,0x04,0x02,0x04,0x02,0x04,0x01,0x08,0x00,0xF0,0x00,0x00},/*"o",79*/
{0x03,0xFE,0x01,0x10,0x02,0x08,0x02,0x08,0x02,0x08,0x01,0x10,0x00,0xE0,0x00,0x00},/*"p",80*/
{0x00,0xE0,0x01,0x10,0x02,0x08,0x02,0x08,0x02,0x08,0x01,0x10,0x03,0xFE,0x00,0x00},/*"q",81*/
{0x00,0x00,0x00,0x00,0x03,0xFC,0x01,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x00,0x00},/*"r",82*/
{0x01,0x88,0x02,0x44,0x02,0x44,0x02,0x24,0x02,0x24,0x02,0x24,0x01,0x18,0x00,0x00},/*"s",83*/
{0x02,0x00,0x02,0x00,0x3F,0xF8,0x02,0x04,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00},/*"t",84*/
{0x03,0xF0,0x00,0x08,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x08,0x03,0xFC,0x00,0x00},/*"u",85*/
{0x03,0x00,0x00,0xC0,0x00,0x30,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x00,0x00},/*"v",86*/
{0x03,0xE0,0x00,0x1C,0x00,0x60,0x03,0x80,0x00,0x60,0x00,0x1C,0x03,0xE0,0x00,0x00},/*"w",87*/
{0x02,0x04,0x01,0x08,0x00,0x90,0x00,0x60,0x00,0x90,0x01,0x08,0x02,0x04,0x00,0x00},/*"x",88*/
{0x03,0x02,0x00,0xC2,0x00,0x34,0x00,0x08,0x00,0x30,0x00,0xC0,0x03,0x00,0x00,0x00},/*"y",89*/
{0x02,0x0C,0x02,0x14,0x02,0x24,0x02,0x44,0x02,0x84,0x03,0x04,0x02,0x04,0x00,0x00},/*"z",90*/
{0x00,0x00,0x00,0x00,0x01,0x00,0xFE,0xFE,0x80,0x02,0x80,0x02,0x00,0x00,0x00,0x00},/*"{",91*/
{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"|",92*/
{0x00,0x00,0x80,0x02,0x80,0x02,0xFE,0xFE,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"}",93*/
{0x40,0x00,0x80,0x00,0x80,0x00,0x40,0x00,0x40,0x00,0x80,0x00,0x00,0x00,0x00,0x00},/*"~",94*/
};

const unsigned char  Icons[][32] = {
	//No:0 +
	{0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0xFF,0xFF,0xFF,0xFF,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80},
	//No:1 -
  {0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80}

};


#endif
