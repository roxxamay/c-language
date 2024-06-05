//THIS PROGRAM IS CREATED BY @ROXXADIIII 
//THIS HELPS IN THE DIFFERENT FUNCTION OF STACK USING ARRAY STATICALLY
//THIS ALSO INCLUDES HEADER FILE NAMED AS SUA.h

#include"SUA.h"

int main(void)
{
    int ch;
    do{
        system("cls");
        printf("\n1.PUSH IN ARRAY\n2.POP FROM ARRAY\n3.DISPLAY ALL\n4.DISPLAY REVERSLY\n0.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:peep();
                    break;
            case 4:rev_peep();
                    break;
            case 0:exit(0);
                    break;
        }
        getch();
    }
    while(15!=0);
}