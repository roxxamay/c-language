/*
10) write a program to input 3 numbers and print the sum of theirs squares respecively.
*/

#include"stdio.h"
#include"math.h"
#include"conio.h"

int main(void)
{
    int a,b,c,sum;
    printf("\nENTER YOUR THREE NUMBERS:");
    scanf("%d%d%d",&a,&b,&c);

    //calculation

    sum=(a*a)+(b*b)+(c*c);  //altier sum=pow(a,2)+pow(b,2)+pow(c,2);

    printf("\nSUM:%d",sum);
    getch();
}