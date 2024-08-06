/**
 * @file CylinderAreaVolumeCalculator.c
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*
Problem Statement
Title: Calculate Cylinder Dimensions
You are tasked with writing a program that calculates the area and volume of a cylinder given its radius and height. The formula for the area of the base of the cylinder is (πr^2) and for the total surface area (including both bases) is (2πrh + πr^2). The volume of the cylinder is given by (\pi r^2 h).

Your program should prompt the user to input the radius ((r)) and height ((h)) of the cylinder. After obtaining these inputs, calculate and display the following:

The area of one base of the cylinder.
The total surface area of the cylinder.
The volume of the cylinder.
Ensure your program handles floating-point arithmetic correctly to account for real-world measurements.

Input Format
The first input will be the radius of the cylinder.
The second input will be the height of the cylinder.
Output Format
Display the area of one base of the cylinder.
Display the total surface area of the cylinder.
Display the volume of the cylinder.
Example
If the user inputs a radius of 5 and a height of 10, the expected output would be:

Area of one base: 78.53981633974483
Total Surface Area: 314.1592653589793
Volume: 785.3981633974483
Constraints
The radius and height will be positive floating-point numbers.
Note
This problem tests your understanding of basic geometry and your ability to write a program that performs
*/

/*********************************************************************
find the area and volume of cylinder?
********************************************************************/

#include"main.h"
int main()
{
    float r,h,a,v;
    printf("\nENTER THE DESIRED HEIGHT OF CYLINFER:");
    scanf("%f",&h);
    printf("\n ENTER THE DESIRED RADIUS:");
    scanf("%f",&r);
    
    a=2*3.14*r*(r+h);
    v=r*r*3.14*h;
    printf("\nHENCE AREA OF CYLINDER:  %f",a);
    printf("\nHENCE VOLUME OF CYLINDER:  %f",v);
    getch();

}