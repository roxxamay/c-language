/**
 * @file CalcTriangleAreaPerimeter.c
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */
/*
Create a function named `calculateTriangleMetrics` that takes three integers representing the sides of a triangle as input and returns two values: the area and the perimeter of the triangle. Use the Heron's formula for the area calculation.
*/
/*********************************************************************
write program to find area and perimeter of triangle?
********************************************************************/
#include"main.h"

int main()
{
    int a,b,c,s,p,ar;
    printf("\nENTER THE 1ST SIDE OF TRAINLGE:  ");
    scanf("%i",&a);
    printf("\nENTER THE 2ND SIDE OF TRAINGLE:  ");
    scanf("%i",&b);
    printf("\nENTER THE 3RD SIDE OF TRAINGLE:  ");
    scanf("%i",&c);
    //calculation
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    p=a+b+c;
    printf("\nHENCE THE AREA:  %i",ar);
    printf("\nHENCE THE PERIMETER:  %i",p);
    getch();
   
}