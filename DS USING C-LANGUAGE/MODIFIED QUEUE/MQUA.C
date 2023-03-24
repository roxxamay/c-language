//this program is created by @roxxadiiii in order to functions of modified queue
#include"mqua.h"

int main(void)

{
    int ch;
    do{
        system("cls");
        printf("\n0.EXIT\n1.ENQUEUE IN MODIFIED QUEUE\n2.DELETE FROM MODIFIED QUEUE");
        printf("\n3.DISPLAY ALL CONTENT\n4.DISPLAY REVERSLY\n");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch){
            case 0:exit(0);
                    break;
            case 1:enqueue();
                    break;
            case 2:dequeue();
                    break;
            case 3:display();
                    break;
            case 4:rev_display();
                    break;
            default:printf("dhyaan se dekh l*du");
        }
        getch();
    }
    while(2);
}