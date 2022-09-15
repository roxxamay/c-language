//22)underroot((m! + n!)/n!)

#include "stdio.h"
#include "math.h"
#include "conio.h"

int main(void)
{
    long int x=1,y=1, n,m, i,z;
    printf("\nENTER THE VALUE OF M:");
    scanf("%d", &m);
    printf("\nENTER THE VALUE OF M:");
    scanf("%d", &n);

    // calculation
    for (i = 1; i <= n; i++)
    {
        x = x * i;
    }

    for (i = 1; i <= m; i++)
    {
        y = y * i;
    }

    z=sqrt((x+y)/y);
    printf("solution is %d",z);
    getch();
}
