/*
6) write a program to accept 4 digit number(same time) from keyboard and then perform following operations.
        a) reverse of the number
        b) sum of the particular degits
        c) sum of the first and last number
*/

#include"stdio.h"
#include"conio.h"
#include"math.h"

int main(void)
{
    int sum=0,n,r;
    printf("\nENTER THE FOUR DIGIT NUMBER:");
    scanf("%4d",&n);

    //calculation
    
    r=n%10;
    sum=sum+r;
    n=n/1000;

    r=n%10;
    sum=sum+r;
    
    printf("\nHENCE THE SUM OF THE FIRST AND THE LAST DIGIT OF THE GIVEN NUMBER IS %d",sum);
    getch();
}