/*********************************************************************
write program to find area and perimeter of triangle?
********************************************************************/
#include"main.h"

int main()
{
    int a,b,c,s,p,ar;
    printf("\nENTER THE 1ST SIDE OF TRAINLGE:  ");
    scanf("%i",&a);
    printf("\nENTER THE 2ND SIDE OF TRAINGLE:  ");
    scanf("%i",&b);
    printf("\nENTER THE 3RD SIDE OF TRAINGLE:  ");
    scanf("%i",&c);
    //calculation
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    p=a+b+c;
    printf("\nHENCE THE AREA:  %i",ar);
    printf("\nHENCE THE PERIMETER:  %i",p);
    getch();
   
}