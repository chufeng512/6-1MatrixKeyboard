#include <STC89C5xRC.H>
#include "LCD1602.h"
#include <stdio.h>  // ʹ�� sprintf ����

// ��������
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
    LCD1602_WriteCmd(0x01);  // ����
    LCD1602_WriteCmd(0x06);  // ģʽ����
    LCD1602_WriteCmd(0x0C);  // ��ʾ����
    LCD1602_WriteCmd(0x38);  // ��ʾģʽ
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
    char buffer[16];  // LCDÿ�п�����ʾ16���ַ�
    
    sprintf(buffer,"%d",num);  // ������ת��Ϊ�ַ���
    
    LCD1602_DisplayString(line, column, buffer);  // ��ʾ�ַ���
}





