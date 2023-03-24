// diffrent type of circuit diagram
// NOT GATE
#include "stdio.h"
#include "conio.h"
#include "math.h"

int main(void)
{
    int a,c;
    printf("\nENTER THE FIRST INPUT:");
    scanf("%d", &a);

    // calculation

    c =! a;

    printf("\n%d IS THE OUTPUT THROUGH THE NOT GATE", c);
    getch();
}