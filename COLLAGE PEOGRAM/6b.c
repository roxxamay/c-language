/*
6) write a program to accept 4 digit number(same time) from keyboard and then perform following operations.
        a) reverse of the number
        b) sum of the particular degits
        c) sum of the first and last number
*/

#include"stdio.h"
#include"math.h"
#include"conio.h"

int main(void)
{
    int n,sum=0,r;
    printf("\nENTER THE FOUR DIGIT DESIRED NUMBER:");
    scanf("%4d",&n);

    //calcculation

    r=n%10;
    sum=sum+r;
    n=n/10;

    r=n%10;
    sum=sum+r;
    n=n/10;

    r=n%10;
    sum=sum+r;
    n=n/10;

    r=n%10;
    sum=sum+r;
    n=n/10;

    printf("\nHENCE THE SUM OF THE GIVEN DIGITS OF THE NUMBER IS %d ",sum);
    getch();
    

}
