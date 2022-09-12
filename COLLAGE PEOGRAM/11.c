// 11) write a program to input a number and print the square root of that number.

#include"stdio.h"
#include"math.h"
#include"conio.h"

int main(void)
{
    int x,a;
    printf("\nENTER THE DESIRIABLE NUMBER:");
    scanf("%d",&x);

    //calculation

    a=sqrt(x);      //ALTIER a=pow(x,0.5);

    printf("\nSQUARE ROOT OF %d IS %d",x,a);
    getch();


}