// 18)WAP TO OUPTPUT THE VALUE OF n!.
#include"stdio.h"
#include"math.h"
#include"conio.h"

int main(void)
{
    long int n,x=1,i;
    printf("\nENTER THE VALUE TO PROCESS FACTORIAL:");
    scanf("%d",&n);

    //calculation
    for(i=1;i<=n;i++)
    {
        x=x*i;
    }
    printf("\nFACTORIAL OF %d IS %d",n,x);
    getch();
}
