//+++++++swapping a number


#include"math.h"
#include"stdio.h"
#include"conio.h"

int main(void)
{
    int a,b;
    printf("\nenter the first number:");
    scanf("%d",&a);
    printf("\n enter the second number:");
    scanf("%d",&b);

    //calculation

    a=a-b;
    b=a+b;
    a=b-a;

    printf("\n hence after swapping the first number is %d and the second number is %d",a,b);
    getch();

}