// diffrent type of circuit diagram
// CUSTOM CIRCUIT
#include "stdio.h"
#include "conio.h"
#include "math.h"

int main(void)
{
    int a, b, c, d, e, f;
    printf("\nENTER THE FIRST INPUT:");
    scanf("%d", &a);
    printf("\nENTER THE SECOND INPUT:");
    scanf("%d", &b);
    printf("\nENTER THE THIRD INPUT:");
    scanf("%d", &c);

    // calculation

    c=a||b;
    e=!b&&d;
    f=c||e;

    printf("\n%d IS THE OUTPUT THROUGH THE CUSTOM GATE",f);
    getch();
}