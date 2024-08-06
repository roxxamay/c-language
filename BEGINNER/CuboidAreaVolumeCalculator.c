/**
 * @file CuboidAreaVolumeCalculator.c
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*
Title: Calculate Cuboid Dimensions

Problem Statement:
You are given three integers representing the length, breadth, and height of a cuboid. Your task is to calculate and return two values: the surface area and the volume of the cuboid.

Function Signature:
```c
void calculateCuboid(int length, int breadth, int height, int *area, int *volume);
```

Requirements:
- The function should take four arguments: the length, breadth, and height of the cuboid, and two pointers to integers where the calculated surface area and volume will be stored.
- The surface area of a cuboid is calculated as `2lw + 2lh + 2wh`.
- The volume of a cuboid is calculated as `lwh`.

Example:
```c
int main() {
    int length = 4, breadth = 5, height = 6;
    int area, volume;
    calculateCuboid(length, breadth, height, &area, &volume);
    printf("Surface Area: %d\nVolume: %d\n", area, volume);
    return 0;
}
```

Notes:
- Ensure your implementation correctly calculates both the surface area and volume of the cuboid.
- Pay attention to the use of pointers for returning multiple values from the function.
- Test your solution with various test cases to ensure accuracy and robustness.

This problem tests your understanding of basic arithmetic operations, variable manipulation, and the use of pointers in C.

*/

/*********************************************************************
find the area and volume of cuboid?
********************************************************************/

#include"main.h"
int main()
{
    int l,b,h,a,v;
    printf("\nLENGTH OF THE CUBOID:");
    scanf("%i",&l);
    printf("\nBREADTH OF THE CUBOID:");
    scanf("%i",&b);
    printf("\nHEIGHT OF THE CUBOID:");
    scanf("%i",&h);

    a=2*(l*b+b*h+h*l);
    v=l*b*h;
    printf("\nHENCE THE AREA IS %i",a);
    printf("\nHENCE THE VOLUME IS %i",v);
    getch();
}