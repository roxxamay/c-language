/*********************************************************************
find the area and volume of sphere?
********************************************************************/
#include"main.h"
int main()
{
    float r,a,v,m;
    printf("\nENTER THE DESIRED LENGTH OF RADIUS:");
    scanf("%f",&r);
    v=4*3.14*r*r*r/3;
    a=4*3.14*r*r;
    printf("\nHENCE AREA=%f",a);
    printf("\n HENCE VOLUME=%f",v);
    getch();
}