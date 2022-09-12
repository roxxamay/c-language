/*********************************************************************
write a program to find the simple and compound intrest?
********************************************************************/

#include"main.h"

int main()
{
    float p,r,si,a;
    int t;
    printf("\nENTER THE PRINCIPAL:  ");
    scanf("%f",&p);
    printf("\nENTER THE RATE:  ");
    scanf("%f",&r);
    printf("\nENTER THE TIME:  ");
    scanf("%i",&t);
    // calculation

    si=p*r*t/100.0;
    a=p+si;
    printf("\nHENCE SIMPLE INTREST:  %f",si);
    printf("\nHENCE AMOUNT:  %f",a);
    getch();


}