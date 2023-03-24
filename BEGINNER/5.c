/*********************************************************************
sum of the cubes of the natural numbers till n.
********************************************************************/
#include"main.h"

int main()
{
    int n,s;
    printf("ENTER THE DESIRED NUMBERS OF TERMS:");
    scanf("%i",&n);
    s=(n*(n+1)/2)*(n*(n+1)/2);
    //altier; pow((n*(n+1)/2),2);
    printf("SUM:%i",s);
    getch();

}