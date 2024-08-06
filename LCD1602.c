#include <STC89C5xRC.H>
#include "LCD1602.h"
#include <stdio.h>  // 使用 sprintf 函数

// 引脚声明
#define RS P11
#define RW P10
#define E P12
#define LCD_DATA P0
#define LCD_STATUS P07

static void LCD1602_CheckStatus()
{
    LCD_STATUS = 1;
    
    RS = 0;
    RW = 1;
    E = 1;
    
    while (LCD_STATUS);
}

static void LCD1602_WriteCmd(u8 cmd)
{
    LCD1602_CheckStatus();
    
    RS = 0;
    RW = 0;
    
    LCD_DATA = cmd;
    
    E = 1;
    E = 0;
}

static void LCD1602_WriteData(u8 dat)
{
    LCD1602_CheckStatus();
    
    RS = 1;
    RW = 0;
    LCD_DATA = dat;
    E = 1;
    E = 0;
}

void LCD1602_Init()
{
    LCD1602_WriteCmd(0x01);  // 清屏
    LCD1602_WriteCmd(0x06);  // 模式设置
    LCD1602_WriteCmd(0x0C);  // 显示开关
    LCD1602_WriteCmd(0x38);  // 显示模式
}

void LCD1602_DisplayString(u8 line, u8 column, u8 *p_str)
{
    line &= 0x01;
    column &= 0x0F;
    
    LCD1602_WriteCmd(0x80 | (line << 6) | column);
    
    while (*p_str)
    {
        LCD1602_WriteData(*p_str);
        p_str++;
    }
}

void LCD1602_DisplayNum(u8 line, u8 column, int num)
{
    char buffer[16];  // LCD每行可以显示16个字符
    
    sprintf(buffer,"%d",num);  // 将数字转换为字符串
    
    LCD1602_DisplayString(line, column, buffer);  // 显示字符串
}





