/**
 * @file SumOfCubes.c
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
Title: Calculate the Sum of Cubes
Difficulty: Easy

Description:

Write a function that takes an integer n as input and returns the sum of the cubes of all natural numbers from 1 to n.

Example:

Input: n = 3
Output: 36 (because 1^3 + 2^3 + 3^3 = 1 + 8 + 27 = 36)
Constraints:

1 <= n <= 10^4
Notes:

This problem tests your understanding of arithmetic series and the concept of cubing numbers. Pay attention to the constraints to ensure your solution runs efficiently.

Function Signature:

int sumOfCubes(int n);
Requirements:

Your implementation should have a time complexity of O(n).
You must handle the case where n is outside the specified range.
Hint:

Consider using the formula for the sum of the first n natural numbers and then cube the result. Alternatively, calculate the sum directly using a loop.
*/
/*********************************************************************
sum of the cubes of the natural numbers till n.
********************************************************************/
#include"main.h"

int main()
{
    int n,s;
    printf("ENTER THE DESIRED NUMBERS OF TERMS:");
    scanf("%i",&n);
    s=(n*(n+1)/2)*(n*(n+1)/2);
    //altier; pow((n*(n+1)/2),2);
    printf("SUM:%i",s);
    getch();

}