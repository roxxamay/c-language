/**
 * @file 15.c
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 /*
 Title: Circle Geometry Calculator

Description:

Given a radius of a circle as input, write a function to calculate and return both the area and the perimeter of the circle. The formula for the area of a circle is πr² and for the perimeter (circumference) is 2πr, where r is the radius.

Function Signature:

void calculateCircleProperties(float radius);
This function should print the area and perimeter of the circle to the console.

Input: A single floating-point number representing the radius of the circle.

Output: Print the area and perimeter of the circle to the console.

Example: If the input radius is 5.0, the expected output would be:

HENCE THE AREA OF CIRCLE IS: 78.500000
HENCE THE PERIMETER OF CIRCLE: 31.400000
Notes:

Ensure your implementation uses the value of pi (π) correctly.
Handle any potential errors or edge cases appropriately.
Constraints:

The radius will be a positive floating-point number.
Hint: Remember to include necessary headers and declare variables appropriately before performing calculations.

Tags: Basic Algebra, Floating Point Numbers, Console I/O
 
 */

/*********************************************************************
write program to find area and perimeter of circle?
********************************************************************/

#include"main.h"

int main()
{
    float r,p,a;
    
    printf("ENTER THE DESIRED RADIUS:  ");
    scanf("%f",&r);

    //calculation

    p=2*3.14*r;
    a=3.14*r*r;

    printf("\nHENCE THE AREA OF CIRCLE IS:  %f",a);
    printf("\nHENCE THE PERIMETER OF CIRCLE:  %f",p);
    getch();


}