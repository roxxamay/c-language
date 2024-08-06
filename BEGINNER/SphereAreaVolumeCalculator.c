/**
 * @file SphereAreaVolumeCalculator.c
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
Title: Calculate Area and Volume of a Sphere
Difficulty Level: Easy

Description:

You are given a task to write a function that calculates and returns two values: the surface area and the volume of a sphere. Given the radius of the sphere as input, both the surface area and the volume should be calculated accurately.

Input:

A single floating-point number representing the radius of the sphere.
Output:

Two floating-point numbers separated by a space, where the first number represents the surface area of the sphere and the second number represents the volume of the sphere.
Example:

If the input radius is 5.0, then the expected output would be:

104.78 523.598
Constraints:

The radius will always be a positive floating-point number.
Function Signature:

void calculateSphereProperties(float radius);
Notes:

The formula for the surface area (A) of a sphere is 4 * π * r^2.
The formula for the volume (V) of a sphere is (4/3) * π * r^3.
Task:

Implement the calculateSphereProperties function in C. Your implementation should read the radius from standard input, calculate the surface area and volume of the sphere using the provided formulas, and print the results to standard output in the format specified above.

Sample Input & Output:

Enter the radius of the sphere: 5.0
104.78 523.598
Hint:

Remember to include necessary headers and declare any variables needed for your calculation.
*/

/*********************************************************************
find the area and volume of sphere?
********************************************************************/
#include"main.h"
int main()
{
    float r,a,v,m;
    printf("\nENTER THE DESIRED LENGTH OF RADIUS:");
    scanf("%f",&r);
    v=4*3.14*r*r*r/3;
    a=4*3.14*r*r;
    printf("\nHENCE AREA=%f",a);
    printf("\n HENCE VOLUME=%f",v);
    getch();
}