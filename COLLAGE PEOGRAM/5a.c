/*
5) write a program to accept 3 digit number(same time) from keyboard and then perform following operations.
        a) reverse of the number
        b) sum of the particular degits
        c) sum of the first and last number
*/

#include"stdio.h"
#include"math.h"
#include"conio.h"

int main(void)
{
    int n,rev=0,r;
    printf("\nENTER THE DESIRED THREE DIGIT NUMBER:");
    scanf("%3d",&n);
    //calculation
    r=n%10;  //finding the ones digit
    rev=(rev*10)+r;  
    n=n/10;  //digitss wexpect one digit

    r=n%10;
    rev=(rev*10)+r;
    n=n/10;

    r=n%10;
    rev=(rev*10)+r;
    n=n/10;

    printf("\nHENCE THE REVERSE NUMBER IS:%d",rev);
    getch();


}