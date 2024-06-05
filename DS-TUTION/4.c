#include"LUA.h"

int main(void)
{
    int ch;
    do
    {
        system("cls");
        printf("\n1.INSERT AT END\n2.INSERT FROM BEGIN\n3.INSERT AFTER A NUMBER\n4.BEFORE A NUMBER");
        printf("\n5.INSERT BETWEEN TWO NUMBER\n6.DELETE A PARTICULAR\n7.DELETE FROM END\n8.DELETE FROM BEGIN\n9.DELETE AFTER A NUMBER");
        printf("\n10.DELETE BEFORE A NUMBER\n11.DELETE BETWEEN A NUMBER\n12.UPDATE A NUMBER");
        printf("\n13.SORTING NUMBERS\n14.DISPLAY ALL\n15.REVERSE DISPLAY ALL\n16.SEARCH A NUMBER\n0.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_end();break;
            case 2:insert_begin();break;
            case 3:insert_after();break;
            case 4:insert_before();break;
            case 5:insert_between();break;
            case 6:del_par();break;
            case 7:del_end();break;
            case 8:del_begin();break;
            case 9:del_after();break;
            case 10:del_before();break;
            case 11:del_betweeen();break;
            case 12:update();break;
            case 13:sort();break;
            case 14:display();break;
            case 15:rev_display();break;
            case 16:search();break;
            case 0:exit(0);break;
        }
        getch();
    }
    while(2);
}