/*********************************************************************
sum of the squares of the natural numbers till n.
********************************************************************/
#include"main.h"

int main()
{
    int n,s;
    printf("ENTER THE DESIRED NUMBERS OF TERMS:");
    scanf("%i",&n);
    s=n*(n+1)*(2*n+1)/6;
    printf("\nSUM:%i",s);
    getch();
}