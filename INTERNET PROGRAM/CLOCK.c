//program for clock
#include<stdio.h>
#include<windows.h>

int main()
{
    int s,m,h;
    int d=1000;//we add delay to program to look more realastic
    printf("ENTER THE TIME (in the format of HH:MM:SS)");
    scanf("%d:%d:%d",&h,&m,&s);
    if(h>12||m>60||s>60)
    {
        printf("\nWTF! DUDE");
        exit(0);
    }
    while(1)//this makes loop infinite
    {
        system("cls");
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }

        printf("\nCLOCK:");
        printf("%02d:%02d:%02d",h,m,s);
        Sleep(d);//1000miliseconds=1seconds
    }
}