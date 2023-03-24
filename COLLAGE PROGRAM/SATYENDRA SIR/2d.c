//+++swapping of the two numbers

#include"stdio.h"
#include"math.h"
#include"conio.h"

int main()
{
    int x,y;
    printf("\nENTER THE FIRST NUMBER:");
    scanf("%d",&x);
    printf("\nENTER THE SECOND NUMBER:");
    scanf("%d",&y);

    //calculation

    x=pow(x,y);
    y=pow(x,y);
    x=pow(x,y);
    y=y%10;
    x=x%10;

    printf("\n HENCE THE FIRST NUMBER IS %d ",y);
    getch();
}