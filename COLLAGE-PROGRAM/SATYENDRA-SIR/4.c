/*
4) write a program to accept 3 digit number from keyboard and then perform following operations.
        a) reverse of the number
        b) sum of the particular degits
        c) sum of the first and last number
*/

#include"stdio.h"
#include"math.h"
#include"conio.h"

int main(void)
{
    int a,b,c,sum_ac,sum_tot,rev,num;
    printf("\nenter the first digit:");
    scanf("\n%1d",&a);
    printf("\nenter the second digit:");
    scanf("%1d",&b);
    printf("\nenter the third digit:");
    scanf("%1d",&c);
    //calculations
    num=100*a+10*b+1*c;

    rev=100*c+10*b+1*a;

    sum_ac=a+c;

    sum_tot=a+b+c;

    printf("\n firstly the inputed digits make the number %d",num);
    printf("\n\tthen the sum of the first and the second digit is %d",sum_ac);
    printf("\n\t\tafter reverse the number would be %d ",rev);
    printf("\n\t\t\tsum of the total digits %d",sum_tot);
    getch();

}