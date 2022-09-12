//++swapping a number using three variables

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int a,b,x;
    printf("\nenter your first desired number:");
    scanf("%d",&a);
    printf("\nenter your second desired number:");
    scanf("%d",&b);
    x=a;
    a=b;
    b=x;

    printf("hence after the swap the first no is %d and the second number is %d",a,b);
    getch();


}