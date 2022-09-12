//S=1+2+3+4+.........+N
#include"conio.h"
#include"math.h"
#include"stdio.h"
int main()
{
    int n,s;
    s=0;
    printf("\nENTER THE DESIRED NUMBER OF TERMS:-");
    scanf("%i",&n);
    s=(n*(n+1))/2;
    printf("\nSUM=%d",s);
    getch();
}