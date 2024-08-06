/**
 * @file 14.c
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*
Create a function named `interestCalc` that takes four parameters: principal amount (`float p`), rate of interest (`float r`), time period (`int t`), and returns two values: simple interest (`float si`) and total amount after adding interest (`float a`). Implement the formula for simple interest (`si = p * r * t / 100`) and calculate the total amount (`a = p + si`).
 */
/*********************************************************************
write a program to find the simple and compound intrest?
********************************************************************/

#include"main.h"

int main()
{
    float p,r,si,a;
    int t;
    printf("\nENTER THE PRINCIPAL:  ");
    scanf("%f",&p);
    printf("\nENTER THE RATE:  ");
    scanf("%f",&r);
    printf("\nENTER THE TIME:  ");
    scanf("%i",&t);
    // calculation

    si=p*r*t/100.0;
    a=p+si;
    printf("\nHENCE SIMPLE INTREST:  %f",si);
    printf("\nHENCE AMOUNT:  %f",a);
    getch();


}