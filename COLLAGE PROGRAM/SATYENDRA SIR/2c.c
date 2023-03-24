//++++++++++swapping of the two number


#include"stdio.h"
#include"conio.h"
#include"math.h"

int main(void)
{
    int x,y;
    printf("\n ENTER THE FIRST NUMBER:");
    scanf("%d",&x);
    printf("\nENTER THE SECOND NUMBER:");
    scanf("%d",&y);
    //CALCULATION

    x=x*y;
    y=x/y;
    x=x/y;

    printf("\nHENCE THE FIRST NUMBER IS %d \n AND SECOND NUMBER IS %d",x,y);
    getch();

}