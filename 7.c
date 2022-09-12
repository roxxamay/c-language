/*********************************************************************
print the value of x where n=?.
********************************************************************/

#include"main.h"
int main()
{
    float x;
    printf("ENTER THE DESIRED NUMBER:");
    scanf("%f",&x);
    printf("\nx=%10.2f",x);
    printf("\nx=%-10.2f",x);
    printf("\nx=%.2f",x);
    printf("\nx=%0f",x);
    printf("\nx=%f",x);
    printf("\nx=%3.2f",x);

    getch();
    
    
}
