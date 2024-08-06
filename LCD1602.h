#ifndef LCD1602_H
#define LCD1602_H
#include <STC89C5xRC.H>

typedef unsigned char u8;
typedef unsigned int u16;

// LCD初始化函数
void LCD1602_Init();

// 显示字符串函数
void LCD1602_DisplayString(u8 line, u8 column, u8 *p_str);

// 显示数字函数
void LCD1602_DisplayNum(u8 line, u8 column, int num);

#endif // LCD1602_H
