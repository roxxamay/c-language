/*
9)write a program to input two 5 digits numbers and do the following task
                total(sum) of the both number
                sum of the disits of the total
*/

#include"stdio.h"
#include"math.h"
#include"conio.h"

int main(void)
{
    int num1,num2,total,r,sum=0;

    printf("\nENTER TWO NUMBERS OF 5 DIGITS:");
    scanf("%5d%5d",&num1,&num2);

    //calculation of the sum of both numbers i.e named as total

    total=num1+num2;

    //now calculation of the sum of the digits of the total

    r=total%10;             //for 1st digit
    sum=sum+r;
    total=total/10;

    //for second digit

    r = total % 10;
    sum = sum + r;
    total = total / 10;

    //for 3rd digit

    r = total % 10;
    sum = sum + r;
    total = total / 10;

    //for 4th digit

    r = total % 10;
    sum = sum + r;
    total = total / 10;

    //for 5th digit

    r = total % 10;
    sum = sum + r;
    total = total / 10;

    //for 6th digit(incase the total exceeded by 1 digit)

    r = total % 10;
    sum = sum + r;
    total = total / 10;

    total=num1+num2;//because in order to sum of the digts our calculated total became 0 so we once again make it the total off num1 and num 2

    //now print the value

    printf("\nTHE TOTAL OF THE BOTH NUMBER IS %d",total);
    printf("\nSUM OF THE DIGITS OF THE TOTAL IS %d",sum);
    getch();

}
