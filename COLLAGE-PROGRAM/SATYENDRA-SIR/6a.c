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
    int n,rev=0,r;
    printf("\nENTER THE FOUR DIGIT NUMBER:");
    scanf("%4d",&n);

    //calculation

    r=n%10;
    rev=(rev*10)+r;
    n=n/10;

    r=n%10;
    rev=(rev*10)+r;
    n=n/10;

    r=n%10;
    rev=(rev*10)+r;
    n=n/10;

    r=n%10;
    rev=(rev*10)+r;
    n=n/10;

    printf("\n THE REVERSE OF THE INPUTED 4 DIGIT NUMBER IS:%d",rev);
    getch();

}