/*********************************************************************
find the area and volume of cylinder?
********************************************************************/

#include"main.h"
int main()
{
    float r,h,a,v;
    printf("\nENTER THE DESIRED HEIGHT OF CYLINFER:");
    scanf("%f",&h);
    printf("\n ENTER THE DESIRED RADIUS:");
    scanf("%f",&r);
    
    a=2*3.14*r*(r+h);
    v=r*r*3.14*h;
    printf("\nHENCE AREA OF CYLINDER:  %f",a);
    printf("\nHENCE VOLUME OF CYLINDER:  %f",v);
    getch();

}