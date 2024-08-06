/**
 * @file RectangleDimensionsCalculator.c
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 /*Problem Statement:
Title: Rectangle Area and Perimeter Calculator

Difficulty Level: Easy

Problem:

Given the length and breadth of a rectangle, write a function named calculateAreaAndPerimeter that takes two parameters, length and breadth, and returns a tuple containing the area and perimeter of the rectangle. The area of a rectangle is calculated as length * breadth, and the perimeter is calculated as 2 * (length + breadth).

If either the length or breadth is less than 1, the function should return (0, 0), indicating that the dimensions are invalid.

Function Signature:

#include <stdio.h>

typedef struct {
    int area;
    int perimeter;
} RectangleDimensions;

RectangleDimensions calculateAreaAndPerimeter(int length, int breadth);
Example Usage:

int main() {
    RectangleDimensions dims = calculateAreaAndPerimeter(5, 3);
    printf("Area: %d\nPerimeter: %d\n", dims.area, dims.perimeter);
    return 0;
}
Constraints:

Both length and breadth are integers within the range [1, 10^5].
The function must not use any external libraries or global variables.
Objective: Write a function that accurately calculates and returns the area and perimeter of a rectangle according to the specifications above. Ensure your solution handles edge cases gracefully.
  */
/*********************************************************************
find the area and perimeter of rectangle.
********************************************************************/

#include"main.h"
int main()
{
    int l,b,a,p;
    printf("\nENTER THE LENGTH OF RECTANGLE:");
    scanf("%i",&l);
    printf("\nENTER THE BREADTH OF RECTANGLE:");
    scanf("%i",&b);
    a=l*b;
    p=2*(l+b);
    printf("AREA:%i",a);
    printf("\nPERIMETER:%i",p);
    getch();

}