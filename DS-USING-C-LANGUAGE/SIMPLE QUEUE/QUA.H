#include"stdio.h"
#include"math.h"
#include"conio.h"
#include"cstdlib"

#define size 10
int info[size];
int front=-1;
int rear=-1;

void enqueue()
{
    int x;
    if(rear==size-1)
    {
        printf("\nQUEUE IS FULL");
        return;
    }
    printf("\nENTER THE DESIRALBE VALUE:");
    scanf("%d",&x);
    rear++;
    info[rear]=x;
}

void dequeue()
{
    int x;
    if(front==rear)
    {
        printf("\nQUEUE IS EMPTY");
        return;
    }
    front++;
    x=info[front];
    printf("\nDELETED NUMBER IS %d",x);
}

void display()
{
    int i;
    if(front==rear)
    {
        printf("\nQUEUE IS EMPTY\n");
        return;
    }
    for(i=front+1;i<=rear;i++)
    {
        printf("%d\t",info[i]);
    }
}

void rev_display()
{
    int i;
    if(front==rear)
    {
        printf("\nQUEUE IS EMPTY\n");
        return;
    }
    for(i=rear;i>=front;i--)
    {
        printf("%d\t",info[i]);
    }
}