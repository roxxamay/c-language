/*
5) write a program to accept 3 digit number(same time) from keyboard and then perform following operations.
        a) reverse of the number
        b) sum of the particular degits
        c) sum of the first and last number
*/

#include"math.h"
#include"stdio.h"
#include"conio.h"

int main(void)
{
    int n,r,sum=0;
    printf("\nENTER THE THREE DIGIT NUMBER:");
    scanf("%3d",&n);

    //calculation

    r=n%10;
    sum=sum+r;
    n=n/100;

    r=n%10;
    sum=sum+r;

    printf("\nTHE SUM OF THE FIRST AND THE LAST DIGIT OF THE NUMBER IS %d",sum);
    getch();
    
}