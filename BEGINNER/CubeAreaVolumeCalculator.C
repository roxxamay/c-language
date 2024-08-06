/**
 * @file CubeAreaVolumeCalculator.C
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */
/*
Title: Calculate Area and Volume of a Cube

Description:

You are given a cube with its side length provided as an integer. Your task is to calculate and return both the surface area and the volume of the cube.

Input:

A single integer sideLength representing the length of one side of the cube.
Output:

Two integers, where the first integer represents the surface area of the cube and the second integer represents the volume of the cube.
Example:

If sideLength = 3, then the output should be [36, 27]. The surface area of a cube with side length 3 is (6 \times 3^2 = 54), but since the problem asks for the surface area only considering one face, it's (3^2 = 9) per face times 6 faces equals 54. The volume of the cube is (3^3 = 27).
Constraints:

The given sideLength will be in the range [1, 100].
Note: The surface area calculation considers all six faces of the cube.
*/

/*********************************************************************
find the area and volume of cube?
********************************************************************/
#include"main.h"
int main()
{
    int s,a,v;
    printf("\nENTER THE LENGTH OF SIDE OF CUBE");
    scanf("%i",&s);
    v=s*s*s;
    a=6*s*s;
    printf("\nHENCE AREA=%i",a);
    printf("\nHENCE VOLUME=%i",v);
    getch();
    
}