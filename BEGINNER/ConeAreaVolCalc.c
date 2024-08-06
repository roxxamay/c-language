/**
 * @file ConeAreaVolCalc.c
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*
Title: Calculate Area and Volume of a Cone

Description:

Given the radius and height of a cone, write a function named calculateConeProperties that returns two values: the area of the base of the cone and the volume of the cone. The formula for the area of the base of a cone is πr² + πrl, where r is the radius, l is the slant height, and π is approximately 3.14159. The formula for the volume of a cone is (πr²h)/3, where h is the height of the cone.

Function Signature:

float calculateConeProperties(float radius, float height);
This function should return a pointer to a struct containing the area and volume of the cone. The struct should be defined as follows:

typedef struct {
    float area;
    float volume;
} ConeProperties;
Example Usage:

int main() {
    ConeProperties properties = calculateConeProperties(5.0, 10.0);
    printf("Area: %.2f\nVolume: %.2f\n", properties.area, properties.volume);
    return 0;
}
Requirements:

Your implementation must use the formulas provided above.
Ensure that your code correctly handles edge cases, such as when the radius or height is zero.
Your solution should be efficient and avoid unnecessary computations.
Note: This problem tests your understanding of structs, pointers, and basic mathematical calculations in C.
*/

/*********************************************************************
find the area and volume of cone?
********************************************************************/
#include"main.h"

int main()
{
    float r,h,l,a,v;
    printf("ENTER THE DESIRED RADIUS:");
    scanf("%f",&r);
    printf("\nENTER THE DESIRED HEIGHT:");
    scanf("%f",&h);

    l=sqrt(r*r+h*h);
    a=3.14*(l+r);
    v=3.14*r*r*h/3.0;

    printf("HENCE AREA OF CONE:  %f",a);
    printf("\nHENCE VOLUME OF CONE:  %f",v);
    getch();

}