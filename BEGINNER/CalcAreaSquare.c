/**
 * @file CalcAreaSquare.c
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*
Create a function named `calculateSquareDimensions` that takes an integer representing the length of one side of a square as its parameter. The function should return two integers: the first integer represents the area of the square, and the second integer represents the perimeter of the square.
*/

/*********************************************************************
write program to find area and perimeter of square?
********************************************************************/
#include"main.h"

int main()
{
    int s,p,a;
    printf("LENGTH OF SIDE:  ");
    scanf("%i",&s);
    a=s*s;
    p=4*s;
    printf("\nHENCE THE AREA:  %i",a);
    printf("\n HENCE THE PERIMETER:  %i",p);
    getch();


}