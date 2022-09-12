/*********************************************************************
find the area and volume of cuboid?
********************************************************************/

#include"main.h"
int main()
{
    int l,b,h,a,v;
    printf("\nLENGTH OF THE CUBOID:");
    scanf("%i",&l);
    printf("\nBREADTH OF THE CUBOID:");
    scanf("%i",&b);
    printf("\nHEIGHT OF THE CUBOID:");
    scanf("%i",&h);

    a=2*(l*b+b*h+h*l);
    v=l*b*h;
    printf("\nHENCE THE AREA IS %i",a);
    printf("\nHENCE THE VOLUME IS %i",v);
    getch();
}