/*********************************************************************
write program to find area and perimeter of circle?
********************************************************************/

#include"main.h"

int main()
{
    float r,p,a;
    
    printf("ENTER THE DESIRED RADIUS:  ");
    scanf("%f",&r);

    //calculation

    p=2*3.14*r;
    a=3.14*r*r;

    printf("\nHENCE THE AREA OF CIRCLE IS:  %f",a);
    printf("\nHENCE THE PERIMETER OF CIRCLE:  %f",p);
    getch();


}