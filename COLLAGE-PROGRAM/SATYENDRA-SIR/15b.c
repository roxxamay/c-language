// diffrent type of circuit diagram
// OR gate
#include "stdio.h"
#include "conio.h"
#include "math.h"

int main(void)
{
    int a, b, c;
    printf("\nENTER THE FIRST INPUT:");
    scanf("%d", &a);
    printf("\nENTER THE SECOND INPUT:");
    scanf("%d", &b);

    // calculation

    c = a || b;

    printf("\n%d IS THE OUTPUT THROUGH THE OR GATE", c);
    getch();
}