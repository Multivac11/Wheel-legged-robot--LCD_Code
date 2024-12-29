//
// Created by w1445 on 2024/12/23.
//

#include "Face.h"
#include "lcd_rgb.h"

void Normal_Face(void)
{
    LCD_FillCircle(200,200,50);
    LCD_FillCircle(600,200,50);
    LCD_FillRect(300,360,200,20);
}

void Rest_Face(void)
{
    LCD_FillRect(150,190,100,20);
    LCD_FillRect(550,190,100,20);
    LCD_FillRect(300,360,200,20);
}

void Dull_Face(void)
{
    LCD_SetFont(&Font400);
    LCD_DisplayString(110,0,"O_O");
}

void Cry_Face(void)
{
    LCD_SetFont(&Font400);
    LCD_DisplayString(110,0,"Q_Q");
}

void XIXI_Face(void)
{
    LCD_SetFont(&Font400);
    LCD_DisplayString(110,0,">_<");
}

void Smile_Face(void)
{
    LCD_SetFont(&Font400);
    LCD_DisplayString(200,0,":D");
}

uint32_t Normal_count = 0;
uint8_t  Normal_change = 0;
uint8_t  Rest_Flag = 0;
void Normal(void)
{
    Normal_count++;
    if(Normal_count>=20000)
    {
        Rest_Flag=1;
    }
    else if(Normal_count<20000)
    {
        Rest_Flag=0;
    }
    if(Rest_Flag==0)
    {
        if(Normal_count % 1200 == 0)
        {
            if(Normal_change==0)
            {
                Normal_change = 1;
            }
            else if(Normal_change==1)
            {
                Normal_change = 0;
            }
            LCD_Clear();
        }
        if(Normal_change==1)
        {
            Normal_Face();
        }
        else if(Normal_change==0)
        {
            Rest_Face();
        }
    }
    else if(Rest_Flag==1)
    {
        Rest_Face();
    }

}
void Face_change(uint8_t mode)
{

}
