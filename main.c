#include <STC89C5xRC.H>
#include "MatrixKeyboard.h"
#include "Delay.h"
#include "LCD1602.h"

void main()
{
	unsigned char key_pressed;
	unsigned char lastkey = 0;
	 
	LCD1602_Init();
	
	while(1)
	{
		key_pressed = MatrixKeyboard_Check();
		
		if(key_pressed && key_pressed!=lastkey)
		{
			LCD1602_Clear();
			LCD1602_DisplayNum(0,0,key_pressed);
			lastkey = key_pressed;
		}
	}
}
