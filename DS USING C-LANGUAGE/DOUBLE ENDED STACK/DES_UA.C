//this is program is created by @roxxadiiii
//this program is created in order to do different types of funtion on doble ended stack

#include"DES_UA.H"

int main(void)
{
    int ch;
    do{
        system("cls");
        printf("\n1.PUSH TO STACK ONE\n2.PUSH TO STACK TWO\n3.POP FROM STACK ONE\n4.POP FROM STACK TWO\n");
        printf("5.DISPLAY FROM STACK ONE\n6.DISPLAY FROM STACK TWO\n7.DISPLAY REVERSLY FROM STACK ONE\n8.DISPLAY REVERSLY FROM STACK TWO\n0.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push_one();
                      break;
            case 2:push_two();
                        break;
            case 3:pop_one();
                        break;
            case 4:pop_two();
                        break;
            case 5:peep_one();
                         break;
            case 6:peep_two();
                        break;
            case 7:rev_peep_one();
                        break;
            case 8:rev_peep_two();
                        break;
            case 0:exit(0);
            default:printf("\nDHYAAAN SE TYPE KR CHHOMU..");
        }
        getch();
    }
    while(2);
}