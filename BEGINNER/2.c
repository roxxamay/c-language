/*********************************************************************
find the area and perimeter of rectangle.
********************************************************************/

#include"main.h"
int main()
{
    int l,b,a,p;
    printf("\nENTER THE LENGTH OF RECTANGLE:");
    scanf("%i",&l);
    printf("\nENTER THE BREADTH OF RECTANGLE:");
    scanf("%i",&b);
    a=l*b;
    p=2*(l+b);
    printf("AREA:%i",a);
    printf("\nPERIMETER:%i",p);
    getch();

}