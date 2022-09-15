// 19)WAP TO OUTPUT THE VALUE OF SUM OF FACTORIAL NUMBER UPTO N

#include"conio.h"
#include"math.h"
#include"stdio.h"

int main(void)
{
    long int n, x = 1, i,j,y=0;
    printf("\n  enter the value to procces sum of factorial:");
    scanf("%d",&n);

    //calculation

    for(i=1;i<=n;i++)
    {
        int x=1;
        for(j=1;j<=i;j++)
        {
            x=x*j;
        }
        y=y+x;
    }
    printf("\nSUM OF FACTORIAL UPTO %d IS %ld",n,y);
    getch();
}