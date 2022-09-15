//20)WAP TO FIND THE ROOT OF THE X.
#include"stdio.h"
#include"conio.h"
#include"math.h"

int main(void)
{
    short int y,i;
    printf("\nENTER THE VALUE TO FIND ROOT:");
    scanf("%hd",&y);

    //calculation

    for(i=1;i<=y/2;i++)
    {
        if((i*i)==y)
        {
            printf("\nROOT OF %hd IS %hd",y,i);
            break;
        }

    }
    getch();

}