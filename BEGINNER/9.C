/*********************************************************************
find the area and volume of cube?
********************************************************************/
#include"main.h"
int main()
{
    int s,a,v;
    printf("\nENTER THE LENGTH OF SIDE OF CUBE");
    scanf("%i",&s);
    v=s*s*s;
    a=6*s*s;
    printf("\nHENCE AREA=%i",a);
    printf("\nHENCE VOLUME=%i",v);
    getch();
    
}