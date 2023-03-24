//WAP TO PRINT DIAGONALLY 1 AND ELSE 0 IN A MAATRIX.

#include"stdio.h"
#include"math.h"

int main(void)
{
    auto short int i,j,n;
    printf("\nENTER THE NUMBERS OF LINES:");
    scanf("%hd",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    getch();
}