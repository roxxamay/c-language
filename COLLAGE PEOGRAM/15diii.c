// diffrent type of circuit diagram
// CUSTOM CIRCUIT
#include "stdio.h"
#include "conio.h"
#include "math.h"

int main(void)
{
    int a, b, c, d, e;
    printf("\nENTER THE FIRST INPUT:");
    scanf("%d", &a);
    printf("\nENTER THE SECOND INPUT:");
    scanf("%d", &b);

    // calculation

    c=(!a)||(!b);
    d=b||(!a);
    e=c&&(!d);


    printf("\n%d IS THE OUTPUT THROUGH THE CUSTOM GATE", e);
    getch();
}