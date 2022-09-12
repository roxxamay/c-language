// 13) write a program to solve : (x+y+z)/x*x

#include"stdio.h"
#include"math.h"
#include"stdio.h"

int main(void)
{
    int x,y,z;
    float a;
    printf("\nENTER THREE DESIRABLE NUMBER:");
    scanf("%d%d%d",&x,&y,&z);

    //calculation

    a=(x+y+z)/(x*x);

    printf("\na=(x+y+z)/(x*x)=%f",a);
    getch();
    
}