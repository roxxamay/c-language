// 7)write a program to reverse a 9 digit number.

#include"stdio.h"
#include"math.h"
#include"conio.h"

int main(void)
{
    long int num,rev=0,r;
    
    printf("\nENTER YOUR 9 DIGIT NUMBER:");
    scanf("%9ld",&num);

    //calculation for 1st digit

    r=num%10;
    rev=(rev*10)+r;
    num=num/10;

    //calculation for 2nd digit

    r = num % 10;
    rev = (rev * 10) + r;
    num = num / 10;

    //calculation for 3rd digit

    r = num % 10;
    rev = (rev * 10) + r;
    num = num / 10;

    //calculation for 4th digit

    r = num % 10;
    rev = (rev * 10) + r;
    num = num / 10;

    //calculation for 5th digit

    r = num % 10;
    rev = (rev * 10) + r;
    num = num / 10;

    //calculation for 6th digit

    r = num % 10;
    rev = (rev * 10) + r;
    num = num / 10;

    //calculation for 7th digit

    r = num % 10;
    rev = (rev * 10) + r;
    num = num / 10;

    //calculation for 8th digit

    r = num % 10;
    rev = (rev * 10) + r;
    num = num / 10;

    //calculation for 9th digit

    r = num % 10;
    rev = (rev * 10) + r;
    num = num / 10;

    //now print the value

    printf("\nREVERSE OF THE GIVEN NUMBER IS %ld",rev);
    getch();
}