/*********************************************************************
determine between getch,getche,getchr.
********************************************************************/

#include"main.h"
int main()
{
    char a,b,c,d;


    printf("\nENTER YOUR FIRST CHARACTER:");
    a=getch();

    printf("\nENTER YOUR SECOND CHARACTER:");
    b=getche();

    printf("\nENTER YOUR THIRD CHARACTER:");
   
    c=getchar();

    printf("\nENTER YOUR FOURTH CHARACTER:");
    
    scanf("%c",&d);

    printf("\na=%c\nb=%c\nc=%c\nd=%c",a,b,c,d);

    getch();

}