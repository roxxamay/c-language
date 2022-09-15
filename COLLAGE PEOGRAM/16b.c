// differnt types of figure with *

#include "stdio.h"
#include "conio.h"

int main(void)
{
    auto short int i, j,k, n;
    printf("\nENTER THE NUMBER OF LINES:");
    scanf("%hd", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");

    }

    getch();
}