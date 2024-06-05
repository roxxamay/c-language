//this is a header file for program used in differnt types od function in double ended stack using array
//this is created by @roxxadiiii

#include"stdio.h"
#include"math.h"
#include"conio.h"
#include"cstdlib"

#define size 10
int info[size];
int top1=-1;
int top2=size;

void push_one()
{
    int x;
    if(top1+1==top2)
    {
        printf("\nSTACK ONE IS FULL");
        return;
    }
    printf("\nENTER THE DESIRED NUMBER YOU WANT TO PUSH IN STACK ONE:");
    scanf("%d",&x);
    top1++;
    info[top1]=x;
}

void push_two()
{
    int x;
    if(top1+1==top2)
    {
        printf("STACK TWO IS FULL");
        return;
    }
    printf("\nENTER THE DESIRED NUMBER YOU WANT TO PUSH IN STACK TWO:");
    scanf("%d",&x);
    top2--;
    info[top2]=x;
}

void pop_one()
{
    int x;
    if(top1==-1)
    {
        printf("\nSTACK ONE IS EMPTY");
        return;
    }
    x=info[top1];
    top1--;
    printf("\n%d IS DELETED FROM STACK ONE",x);
}

void pop_two()
{
    int x;
    if(top2==size)
    {
        printf("\nSTACK TWO IS EMPTY");
        return;

    }
    x=info[top2];
    top2++;
    printf("\n%d IS DELETED FROM STACK TWO",x);
}

void peep_one()
{
    int i;
    if(top1==-1)
    {
        printf("\nSTACK ONE IS EMPTY\n");
        return;
    }
    for(i=top1;i>=0;i--)
    {
        printf("%d\t",info[i]);
    }

}

void peep_two()
{
    int i;
    if(top2==size)
    {
        printf("\nSTACK TWO IS EMPTY\n");
        return;
    }
    for(i=top2;i<=size;i++)
    {
        printf("%d\t",info[i]);
    }
}

void rev_peep_one()
{
    int i;
    if(top1==-1)
    {
        printf("\nSTACK ONE IS EMPTY");
        return;
    }
    printf("\nDISPLAYING REVERSLY FROM STACK ONE....\n");
    for(i=0;i<=top1;i++)
    {
        printf("%d\t",info[i]);
    }
}

void rev_peep_two()
{
    int i;
    if(top2==size)
    {
        printf("\nSTACK IS EMPTY");
        return;
    }
    printf("\nDISPLAYING REVERSLY FROM STACK TWO....\n");
    for(i=size-1;i>=top2;i--)
    {
        printf("%d\t",info[i]);
    }
}