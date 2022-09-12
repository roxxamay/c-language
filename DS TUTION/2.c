#include"DS2A.H"

int main(void)
{
    int ch;
    do
    {
        system("cls");
        printf("\n1.PUSH IN STACK 1\n2.PUSH IN STACK 2\n3.POP IN STACK 1\n4.POP IN STACK 2\n5.PEEP STACK 1");
        printf("\n6.PEEP STACK 2\n7.REVERSLY PEEP STACK 1\n8.REVERSLY PEEP STACK 2\n0.EXIT");
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
        }
        getch();

    }
    while(2);
}