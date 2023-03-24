//8)write a program to obtain the sum of the 1st and last digit of the given 5 digit number.

#include"stdio.h"
#include"math.h"
#include"conio.h"

int main(void)
{
    int num,sum=0,r;

    printf("\nENTER THE 5 DIGIT NUMBER:");
    scanf("%5d",&num);

    //calculation for the ones digit

    r=num%10;
    sum=sum+r;

    //calculation for the last digit

    r=num/10000;
    sum=sum+r;

    //now printing the value

    printf("\nSUM OF THE FIRST AND LAST DIGIT OF THE NUMBER IS %d",sum);
    getch();

}