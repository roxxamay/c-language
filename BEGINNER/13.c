/*********************************************************************
find the area and volume of prism?
********************************************************************/

#include"main.h"

int main()
{
    int area,v,s,a,b,c,h;

    printf("\nENTER THE 1ST SIDE OF TRAINGULAR PRISM:");
    scanf("%i",&a);

    printf("\nENTER THE 2nd SIDE OF TRAINGULAR PRISM:");
    scanf("%i",&b);

    printf("\nENTER THE 3rd SIDE OF TRAINGULAR PRISM:");
    scanf("%i",&c);

    printf("\nENTER THE HEIGHT OF TRAINGULAR PRISM:");
    scanf("%i",&h);
    //CALCULATION

    s=(a+b+c)/2.0;
    v=s*sqrt(s*(s-a)*(s-b)*(s-c))*h;
    area=((2*s*sqrt(s*(s-a)*(s-b)*(s-c)))+((a+b+c)*h));
    
    printf("\nHENCE THE REQUIRED AREA:  %i",area);
    printf("\nHENCE THE REQUIRED VOLUME:  %i",v);
    getch();

}