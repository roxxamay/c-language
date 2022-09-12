/*
5) write a program to accept 3 digit number(same time) from keyboard and then perform following operations.
        a) reverse of the number
        b) sum of the particular degits
        c) sum of the first and last number
*/

#include"stdio.h"
#include"conio.h"
#include"math.h"

int main(void)
{
    int n,sum=0,r;
    printf("\nENTER THE THREE DIGIT NUMBER:");
    scanf("%3d",&n);

    //calculation

    r=n%10;
    sum=sum+r;
    n=n/10;

    r=n%10;
    sum=sum=r;
    n=n/10;

    r=n%10;
    sum=sum+r;
    n=n/10;

    printf("\nHENCE THE SUM OF THE ALL DIGITS IS:%d",sum);
    getch();
    

}