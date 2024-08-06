/**
 * @file FindAreaAndVolumeOfPrism.c
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*
Title: Calculate Prism Area and Volume

Description: You are given a triangular prism with three sides of lengths (a), (b), and (c), and a height (h). Your task is to write a function that calculates and returns two values: the surface area ((SA)) and the volume ((V)) of the prism.

Function Signature:

void calculatePrismMetrics(int a, int b, int c, int h, int *SA, int *V);
Parameters:

int a, b, c: The lengths of the three sides of the triangular base.
int h: The height of the prism.
int *SA, *V: Pointers to integers where the calculated surface area and volume will be stored.
Return Value: This function does not return any value. Instead, it modifies the values pointed to by SA and V.

Example: Given a triangular prism with sides (a = 3), (b = 4), (c = 5), and height (h = 6), the function should calculate the surface area and volume accordingly.

Notes:

Ensure your calculation for the surface area and volume correctly follows the formulas used in the provided program.
Remember to handle integer division and rounding appropriately, as the problem statement specifies integer inputs and outputs.
*/

/*********************************************************************
find the area and volume of prism?
********************************************************************/

#include"main.h"

int main()
{
    int area,v,s,a,b,c,h;

    printf("\nENTER THE 1ST SIDE OF TRAINGULAR PRISM:");
    scanf("%i",&a);

    printf("\nENTER THE 2nd SIDE OF TRAINGULAR PRISM:");
    scanf("%i",&b);

    printf("\nENTER THE 3rd SIDE OF TRAINGULAR PRISM:");
    scanf("%i",&c);

    printf("\nENTER THE HEIGHT OF TRAINGULAR PRISM:");
    scanf("%i",&h);
    //CALCULATION

    s=(a+b+c)/2.0;
    v=s*sqrt(s*(s-a)*(s-b)*(s-c))*h;
    area=((2*s*sqrt(s*(s-a)*(s-b)*(s-c)))+((a+b+c)*h));
    
    printf("\nHENCE THE REQUIRED AREA:  %i",area);
    printf("\nHENCE THE REQUIRED VOLUME:  %i",v);
    getch();

}