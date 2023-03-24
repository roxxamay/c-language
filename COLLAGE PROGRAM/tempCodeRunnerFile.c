// differnt types of figure with *
/*
*
**
***
****
*****
*/


#include"stdio.h"
#include"conio.h"

int main(void)
{
   auto short int i,j,n;
   printf("\nENTER THE NUMBER OF LINES:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
   }
   getch();

}