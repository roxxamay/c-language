/**
 * @file SumOfNaturalNumbers.c
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 /*Problem Statement:

Given a positive integer N, write a function to calculate the sum of all natural numbers up to N. The formula for the sum of the first N natural numbers is N * (N + 1) / 2.

Function Signature:

int sum_of_natural_numbers(int N);
Input:

A single integer N representing the upper limit of the natural numbers.
Output:

An integer representing the sum of all natural numbers up to N.
Example:

If N = 5, the function should return 15 because the sum of the first 5 natural numbers (1 + 2 + 3 + 4 + 5) is 15.
Constraints:

1 <= N <= 10^4
The input N is always a positive integer.
Notes:

Your solution should have a time complexity of O(1), meaning it should not depend on the size of N to compute the sum.
Hint:

Consider using the arithmetic series formula mentioned above.
Solution: Write a C function named sum_of_natural_numbers that takes an integer N as its parameter and returns the sum of all natural numbers up to N according to the specified formula.
 */

//S=1+2+3+4+.........+N
#include"conio.h"
#include"math.h"
#include"stdio.h"
int main()
{
    int n,s;
    s=0;
    printf("\nENTER THE DESIRED NUMBER OF TERMS:-");
    scanf("%i",&n);
    s=(n*(n+1))/2;
    printf("\nSUM=%d",s);
    getch();
}