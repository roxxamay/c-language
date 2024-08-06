/**
 * @file SquareSumCalculator.c
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 /*
 Problem Statement: Sum of Squares of First N Natural Numbers
Problem Description:
Write a function that takes an integer n as input and returns the sum of the squares of the first n natural numbers.

Example:
Input: n = 3
Output: 14 (since 1^2 + 2^2 + 3^2 = 14)
Constraints:
1 <= n <= 10000
Notes:
This problem tests your understanding of arithmetic progressions and the formula for the sum of the first n natural numbers.

Function Signature:
int sum_of_squares(int n);
Explanation:
The formula for the sum of the squares of the first n natural numbers is given by (\frac{n(n+1)(2n+1)}{6}). Implement this formula in your solution.

Testing:
Your implementation should pass all the hidden unit tests to ensure it works correctly across the entire range of valid inputs.
 */

/*********************************************************************
sum of the squares of the natural numbers till n.
********************************************************************/
#include"main.h"

int main()
{
    int n,s;
    printf("ENTER THE DESIRED NUMBERS OF TERMS:");
    scanf("%i",&n);
    s=n*(n+1)*(2*n+1)/6;
    printf("\nSUM:%i",s);
    getch();
}