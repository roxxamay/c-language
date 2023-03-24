//THIS PROGRAM IS CREATED BY @ROXXADIIII

#include"stdio.h"
#include"conio.h"

int main(void)
{
    int x;
    printf("\nENTER THE NUMBER:");
    scanf("%d",&x);
    if(x%x==0||x%1==0)
    {
        printf("\n%d IS A PRIME NUMBER",x);
    }
    else
    {
        printf("\n%d IS NOT A PRIME NUMBER",x);
    }
    getch();
}