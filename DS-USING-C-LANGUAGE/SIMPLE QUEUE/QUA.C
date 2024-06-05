#include"QUA.H"

int main(void)
{
    int ch;
    do{
        system("cls");
        printf("\n0.EXIT\n1.ENQUEUE IN STACK\n2.DELETE FROM STACK\n3.DISPLAY FROM QUEUE\n4.DISPLAY REVERSLY FROM QUEUE\n");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch){
            case 0:exit(0);
            default:printf("\nDHYAAN SE DAAL LODU....");
                    break;
            case 1:enqueue();
                    break;
            case 2:dequeue();
                    break;
            case 3:display();
                    break;
            case 4:rev_display();
                    break;
        } 
        getch();
    }
    while(2);
}