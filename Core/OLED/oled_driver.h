//////////////////////////////////////////////////////////////////////////////////	 
//锟斤拷锟斤拷锟斤拷只锟斤拷学习使锟矫ｏ拷未锟斤拷锟斤拷锟斤拷锟斤拷桑锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷魏锟斤拷锟酵�
//锟叫撅拷园锟斤拷锟斤拷
//锟斤拷锟教碉拷址锟斤拷http://shop73023976.taobao.com/?spm=2013.1.0.0.M4PqC2
//
//  锟斤拷 锟斤拷 锟斤拷   : main.c
//  锟斤拷 锟斤拷 锟斤拷   : v2.0
//  锟斤拷    锟斤拷   : HuangKai
//  锟斤拷锟斤拷锟斤拷锟斤拷   : 2014-0101
//  锟斤拷锟斤拷薷锟�   :
//  锟斤拷锟斤拷锟斤拷锟斤拷   : OLED 4锟接匡拷锟斤拷示锟斤拷锟斤拷(51系锟斤拷)
//              说锟斤拷:
//              ----------------------------------------------------------------
//              GND    锟斤拷源锟斤拷
//              VCC  锟斤拷5V锟斤拷3.3v锟斤拷源
//              D0   锟斤拷PD6锟斤拷SCL锟斤拷
//              D1   锟斤拷PD7锟斤拷SDA锟斤拷
//              RES  锟斤拷PD4
//              DC   锟斤拷PD5
//              CS   锟斤拷PD3
//              ----------------------------------------------------------------
// 锟睫革拷锟斤拷史   :
// 锟斤拷    锟斤拷   :
// 锟斤拷    锟斤拷   : HuangKai
// 锟睫革拷锟斤拷锟斤拷   : 锟斤拷锟斤拷锟侥硷拷
//锟斤拷权锟斤拷锟叫ｏ拷锟斤拷锟斤拷鼐锟斤拷锟�
//Copyright(C) 锟叫撅拷园锟斤拷锟斤拷2014/3/16
//All rights reserved
//******************************************************************************/
#ifndef __OLED_H
#define __OLED_H			  	 
#include "sys.h"
#include "stdlib.h"
#include "main.h"
//OLED模式锟斤拷锟斤拷
//0:4锟竭达拷锟斤拷模式
//1:锟斤拷锟斤拷8080模式
#define OLED_MODE 0
#define SIZE 16
#define XLevelL		0x00
#define XLevelH		0x10
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF 
#define X_WIDTH 	128
#define Y_WIDTH 	64	    						  
/*STD version*/
//-----------------OLED锟剿口讹拷锟斤拷----------------
//#define OLED_CS_Clr()  GPIO_ResetBits(GPIOD,GPIO_Pin_3)//CS
//#define OLED_CS_Set()  GPIO_SetBits(GPIOD,GPIO_Pin_3)
//
//
//#define OLED_RST_Clr() GPIO_ResetBits(GPIOD,GPIO_Pin_4)//RES
//#define OLED_RST_Set() GPIO_SetBits(GPIOD,GPIO_Pin_4)
//
//#define OLED_DC_Clr() GPIO_ResetBits(GPIOD,GPIO_Pin_5)//DC
//#define OLED_DC_Set() GPIO_SetBits(GPIOD,GPIO_Pin_5)
//
//#define OLED_WR_Clr() GPIO_ResetBits(GPIOG,GPIO_Pin_14)
//#define OLED_WR_Set() GPIO_SetBits(GPIOG,GPIO_Pin_14)
//
//#define OLED_RD_Clr() GPIO_ResetBits(GPIOG,GPIO_Pin_13)
//#define OLED_RD_Set() GPIO_SetBits(GPIOG,GPIO_Pin_13)
//
//
//
////PC0~7,锟斤拷为锟斤拷锟斤拷锟斤拷
//#define DATAOUT(x) GPIO_Write(GPIOC,x);//锟斤拷锟�
////使锟斤拷4锟竭达拷锟叫接匡拷时使锟斤拷
//
//#define OLED_SCLK_Clr() GPIO_ResetBits(GPIOD,GPIO_Pin_6)//CLK
//#define OLED_SCLK_Set() GPIO_SetBits(GPIOD,GPIO_Pin_6)
//
//#define OLED_SDIN_Clr() GPIO_ResetBits(GPIOD,GPIO_Pin_7)//DIN
//#define OLED_SDIN_Set() GPIO_SetBits(GPIOD,GPIO_Pin_7)

/*LL version*/
//-----------------OLED锟剿口讹拷锟斤拷----------------
/*
 * SCL->PB13->OLED_SCK
 * SDA->PB15->OLED_SDA
 * RES->PB14->OLED_RES
 * DC->PB12->OLED_DC
 * CS->PB6->OLED_CS
 */
#define OLED_CS_Clr()  LL_GPIO_ResetOutputPin(OLED_CS_GPIO_Port, OLED_CS_Pin)//CS
#define OLED_CS_Set()  LL_GPIO_SetOutputPin(OLED_CS_GPIO_Port, OLED_CS_Pin)


#define OLED_RST_Clr() LL_GPIO_ResetOutputPin(OLED_RES_GPIO_Port, OLED_RES_Pin)//RES
#define OLED_RST_Set() LL_GPIO_SetOutputPin(OLED_RES_GPIO_Port, OLED_RES_Pin)

#define OLED_DC_Clr() LL_GPIO_ResetOutputPin(OLED_DC_GPIO_Port,OLED_DC_Pin)//DC
#define OLED_DC_Set() LL_GPIO_SetOutputPin(OLED_DC_GPIO_Port,OLED_DC_Pin)

#define OLED_WR_Clr() LL_GPIO_ResetOutputPin(GPIOG,GPIO_Pin_14)
#define OLED_WR_Set() LL_GPIO_SetOutputPin(GPIOG,GPIO_Pin_14)

#define OLED_RD_Clr() LL_GPIO_ResetOutputPin(GPIOG,GPIO_Pin_13)
#define OLED_RD_Set() LL_GPIO_SetOutputPin(GPIOG,GPIO_Pin_13)



//PC0~7,锟斤拷为锟斤拷锟斤拷锟斤拷
#define DATAOUT(x) GPIO_Write(GPIOC,x);//锟斤拷锟�
//使锟斤拷4锟竭达拷锟叫接匡拷时使锟斤拷

#define OLED_SCLK_Clr() LL_GPIO_ResetOutputPin(OLED_SCK_GPIO_Port,OLED_SCK_Pin)//CLK
#define OLED_SCLK_Set() LL_GPIO_SetOutputPin(OLED_SCK_GPIO_Port,OLED_SCK_Pin)

#define OLED_SDIN_Clr() LL_GPIO_ResetOutputPin(OLED_SDA_GPIO_Port,OLED_SDA_Pin)//DIN
#define OLED_SDIN_Set() LL_GPIO_SetOutputPin(OLED_SDA_GPIO_Port,OLED_SDA_Pin)

 		     
#define OLED_CMD  0	//写锟斤拷锟斤拷
#define OLED_DATA 1	//写锟斤拷锟斤拷


//OLED锟斤拷锟斤拷锟矫猴拷锟斤拷
void OLED_WR_Byte(uint8_t dat,uint8_t cmd);
void OLED_Display_On(void);
void OLED_Display_Off(void);	   							   		    
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(uint8_t x,uint8_t y,uint8_t t);
void OLED_Fill(uint8_t x1,uint8_t y1,uint8_t x2,uint8_t y2,uint8_t dot);
void OLED_ShowChar(uint8_t x,uint8_t y,uint8_t chr);
void OLED_ShowNum(uint8_t x,uint8_t y,uint32_t num,uint8_t len,uint8_t size);
void OLED_ShowString(uint8_t x,uint8_t y, uint8_t *p);
void OLED_Set_Pos(unsigned char x, unsigned char y);
void OLED_ShowCHinese(uint8_t x,uint8_t y,uint8_t no);
void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);
#endif  
	 



