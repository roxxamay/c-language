/*

14) if the basic salary and net salary is given find out the percentage of increasement.

*/

#include"stdio.h"
#include"conio.h"
#include"math.h"

int main(void)
{
    int bs,ns;
    float x;

    printf("\nENTER THE BASIC SALARY:");
    scanf("%d",&bs);
    printf("\nENTER THE NET SALARY:");
    scanf("%d",&ns);

    //calculation

    x=((ns-bs)*100)/bs;

    printf("\n%f is the percentage of increasement",x);
    getch();

}