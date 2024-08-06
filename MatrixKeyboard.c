#include <STC89C5xRC.H>
#include "MatrixKeyboard.h"
#include "Delay.h"

//需求：按下矩阵按键SW5到SW20，LCD1602会显示对应的按键编号

//检测按键是否被按下
//SW5被按下
unsigned char MatrixKeyboard_Check()
{
	P2 = 0xFE;
	if(P27 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P27 == 0)
		{
			while(1)
			{
				if(P27 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P27 == 1)
					{
						return 5;
					}
				}
			}
		}
	}
	if(P26 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P26 == 0)
		{
			while(1)
			{
				if(P26 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P26 == 1)
					{
						return 9;
					}
				}
			}
		}
	}
	if(P25 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P25 == 0)
		{
			while(1)
			{
				if(P25 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P25 == 1)
					{
						return 13;
					}
				}
			}
		}
	}
	if(P24 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P24 == 0)
		{
			while(1)
			{
				if(P24 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P24 == 1)
					{
						return 17;
					}
				}
			}
		}
	}
	// 1111 1101
	P2 = 0xFC;
	if(P27 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P27 == 0)
		{
			while(1)
			{
				if(P27 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P27 == 1)
					{
						return 6;
					}
				}
			}
		}
	}
	if(P26 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P26 == 0)
		{
			while(1)
			{
				if(P26 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P26 == 1)
					{
						return 10;
					}
				}
			}
		}
	}
	if(P25 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P25 == 0)
		{
			while(1)
			{
				if(P25 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P25 == 1)
					{
						return 14;
					}
				}
			}
		}
	}
	if(P24 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P24 == 0)
		{
			while(1)
			{
				if(P24 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P24 == 1)
					{
						return 18;
					}
				}
			}
		}
	}
	//1111 1011 
	P2 = 0xFB;
	if(P27 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P27 == 0)
		{
			while(1)
			{
				if(P27 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P27 == 1)
					{
						return 7;
					}
				}
			}
		}
	}
	if(P26 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P26 == 0)
		{
			while(1)
			{
				if(P26 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P26 == 1)
					{
						return 11;
					}
				}
			}
		}
	}
	if(P25 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P25 == 0)
		{
			while(1)
			{
				if(P25 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P25 == 1)
					{
						return 15;
					}
				}
			}
		}
	}
	if(P24 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P24 == 0)
		{
			while(1)
			{
				if(P24 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P24 == 1)
					{
						return 19;
					}
				}
			}
		}
	}
	// 1111 0111
	P2 = 0xF7;
	if(P27 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P27 == 0)
		{
			while(1)
			{
				if(P27 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P27 == 1)
					{
						return 8;
					}
				}
			}
		}
	}
	if(P26 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P26 == 0)
		{
			while(1)
			{
				if(P26 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P26 == 1)
					{
						return 12;
					}
				}
			}
		}
	}
	if(P25 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P25 == 0)
		{
			while(1)
			{
				if(P25 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P25 == 1)
					{
						return 16;
					}
				}
			}
		}
	}
	if(P24 == 0)
	{
		//按下前消抖
		Delay1ms(10);
		if(P24 == 0)
		{
			while(1)
			{
				if(P24 == 1)
				{
					//抬起前消抖
					Delay1ms(10);
					if(P24 == 1)
					{
						return 20;
					}
				}
			}
		}
	}
	return 0;
}

