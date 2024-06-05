/*********************************************************************
1. WAP TO PERFORM THE FOLLOWING OPERATION ON STACK USING ARAAY STATICALLY
              PUSH,POP,PEEP,REVERSE PEEP
********************************************************************/
#include"SUA.h"

int main()
{
    int ch;
    do
    {
        printf("\n1.push\n2.pop\n3.peep\n4.reverse peep");
        printf("\n0.exit\nENTER YOUR DESIRED CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();break;
            case 2:pop();break;
            case 3:peep();break;
            case 4:rev_peep();break;
            case 0:exit(0);
        }
        getch();

    }
    while(15!=0);
    
}