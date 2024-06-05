//this is the header file of STACK USING ARRAY

#include"stdio.h"
#include"math.h"
#include"conio.h"
#include"cstdlib"

#define size 10
int info[size];
int top=-1;

void push()
{
    int x;
    if(top==size-1)
    {
        printf("\nSTACK IS FULL");
        return;
    }
    printf("ENTER YOUR DESIRED NUMBER:");
    scanf("%d",&x);
    top++;
    info[top]=x;
}

void pop()
{
    int x;
    if(top==-1)
    {
        printf("\nSTACK IS EMPTY");
        return;
    }
    x=info[top];
    top--;
    printf("\nYOUR DELETED NUMBER IS %d",x);
}

void peep()//display
{
    int i;
    if(top==-1)
    {
        printf("\nSTACK IS EMPTY");
        return;
    }
    for(i=top;i>=0;i--)
    {
        printf("\t%d",info[i]);
    }
}
void rev_peep()//means display reversly
{
    int i;
    if(top==-1)
    {
        printf("\nSTACK IS EMPTY");
        return;
    }

    for(i=0;i<=top;i++)
    {
        printf("\t%d",info[i]);
    }

}