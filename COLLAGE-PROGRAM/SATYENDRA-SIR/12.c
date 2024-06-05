// 12) write a program to input two number and print the square root of the sum of the squares of both numbers.

#include"stdio.h"
#include"math.h"
#include"conio.h"

int main(void)
{
    int x,y;
    float a;
    printf("\nENTER TWO DESIREABLE NUMBERS:");
    scanf("%d%d",&x,&y);

    //calculation

    a=sqrt((x*x)+(y*y));

    printf("\nSQUARE ROOT OF THE SQUARES OF %d AND %d IS %f",x,y,a);
    getch();
    
}