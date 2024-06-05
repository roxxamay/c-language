// different types of figure using *
#include"stdio.h"
#include"conio.h"

int main(void)
{
    auto short int i,j,k,n;
    printf("\nENTER THE NUMBERS OF LINE:");
    scanf("%hd",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i)-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}