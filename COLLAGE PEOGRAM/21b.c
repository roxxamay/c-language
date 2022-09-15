// MISC

#include "stdio.h"
#include "conio.h"
#include "math.h"

int main(void)
{
    int a, b, c,d, i, j;
    printf("\nENTER THE VALUE OF A");
    scanf("%d", &a);
    printf("\nENTER THE VALUE OF B");
    scanf("%d", &b);
    printf("\nENTER THE VALUE OF C");
    scanf("%d", &c);
    printf("\nENTER THE VALUE OF D");
    scanf("%d", &d);

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j<=4; j++)
        {

            if (i == 1 && j == 1)
            {
                printf("%d", a);
            }
            else if (i == 4 && j == 1)
            {
                printf("%d", b);
            }
            else if (j == 4 && i == 4)
            {
                printf("%d", d);
            }
            else if (j == 4 && i == 1)
            {
                printf("%d", c);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}