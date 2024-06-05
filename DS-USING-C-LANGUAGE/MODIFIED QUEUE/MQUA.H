#include"stdio.h"
#include"math.h"
#include"conio.h"
#include"cstdlib"

#define size 5
int rear=-1;
int front=-1;
int info[size];

void enqueue()
{
    int x,i,j;
    if(rear==size-1)
    {
        if(front==-1)
        {
            printf("\nMODIFIED QUEUE IS FULL");
            return;
        }
        for(i=front+1,j=0;i<=rear;i++,j++)
        {
            info[j]=info[i];
        }
        rear=j-1;
        front=-1;
    }
    printf("\nENTER A DESIRABLE VALUE:");
    scanf("%d",&x);
    rear++;
    info[rear]=x;
}

void dequeue()
{
    if(rear==front)
    {
        printf("\nMODIFIED QUEUE IS EMPTY");
        return;
    }
    front++;
    printf("\n%d IS DELETED FROM MODIFIED QUEUE.",info[front]);

}

void display()
{
    int i;
    if(rear==front)
    {
        printf("\nMODIFIED QUEUE IS EMPTY");
        return;
    }
    printf("\nDISPLAYING ALL CONTENT OF MODIFIED QUEUE:\n");
    for(i=front+1;i<=rear;i++)
    {
        printf("%d\t",info[i]);
    }
}

void rev_display()
{
    int i;
    if(rear==front)
    {
        printf("\nMODIFIED QUEUE IS EMPTY\n");
        return;
    }
    printf("DISPLAYING ALL CONTENT OF MODIFIED QUEUE REVERSLY:\n");
    for(i=rear;i>front;i--)
    {
        printf("%d\t",info[i]);
    }
}