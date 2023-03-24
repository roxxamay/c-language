/*********************************************************************
find the area and volume of cone?
********************************************************************/
#include"main.h"

int main()
{
    float r,h,l,a,v;
    printf("ENTER THE DESIRED RADIUS:");
    scanf("%f",&r);
    printf("\nENTER THE DESIRED HEIGHT:");
    scanf("%f",&h);

    l=sqrt(r*r+h*h);
    a=3.14*(l+r);
    v=3.14*r*r*h/3.0;

    printf("HENCE AREA OF CONE:  %f",a);
    printf("\nHENCE VOLUME OF CONE:  %f",v);
    getch();

}