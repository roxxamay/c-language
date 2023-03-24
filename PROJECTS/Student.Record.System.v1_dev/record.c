/**
 * @file record.c
 * @author @roxxadiiii
 * @brief this is the simple program to mange the records of the students of an institute
 * @version 0.1
 * @date 2023-03-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<time.h>

//making custom function

void border()               //function for border
{
    int i;
    for(i=0;i<=89;i++)
    {
        printf("*");
    }
    printf("\n");
    for (i = 0; i <= 89; i++)
    {
        printf("*");
    }
}

void title()                //function for the titles of institute
{
    for(int i =0 ; i<=20 ; i++)
    {
        printf(" ");

    }
    printf("South Harmon Institute of Technology (S.H.I.T.)");
}

void gotoxy( int x , int y )    //function for going to the positon using coord i.e. coordinates...
{
    COORD crd={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),crd);
}



//********************************************

#define Student struct stud

//pre-listed function that will be used in the program..
void add( FILE * fp );
void modify( FILE * fp );
void display( FILE * fp );
void Indivisual( FILE * fp );
void password();        //for password
FILE * del( FILE * fp );

FILE *tp;           //temp file for password

//defining the space for password

struct pass
{
    char pass[25];
}pa;

//defining the space for all the left all variables..

struct stud
{
    char name[100];
    char dept[50];
    int roll;
    float cgpa;
};

int main()
{
    long long int t ;
    int k = 0 ,i , option ;
    char c , pass[50];
    SetConsoleTitle("STUDENT MANAGEMENT SYSTEM  || S.H.I.T.");
    time_t;
    time(&t);
    FILE * fp ;
    Student s;
    int choice;
    char another;

    if(fp=fopen("db.txt","rb+")==NULL)      //if file is not created
    {
        if((fopen("db.txt","wb+"))==NULL)       //then try to create one
        {
            printf("CAN,T CREATE OR OPEN DATABASE.");
            return 0 ;
        }
    }
    system("cls");
    gotoxy(42,8);
    printf("LOGIN(if first login press ENTER)");
    gotoxy(42,10);
    printf("========================================");
    gotoxy(42,11);
    printf("|\tENTER PASSWORD:                  |");
    gotoxy(42,12);
    printf("|======================================|");
    gotoxy(63,11);
    while(k<10)
    {
        pass[k]=getch();
        char s = pass[k];
        if( s==13 )     //enter=13 
        {
            break;
        }
        else
        {
            printf("*");
        }
        k++;
    }

    pass[k]='\0';       //null character
    tp=fopen("password.txt","r+");
    fgets(pa.pass,25,tp);
    if(strcmp(pass,pa.pass)==0)
    {
        system("cls");
        gotoxy(15,6);
        printf("<<<<< LOADING PLEASE WAIT>>>>>");
        for( i=0 ; i < 5 ; i++ )
        {
            printf("\t(*_*)");
            Sleep(500);
        }
        gotoxy(5,10);
        puts(
        "\n\t\t##   ##  ### ###  ####      ## ##    ## ##   ##   ##  ### ###  "
        "\n\t\t##   ##   ##  ##   ##      ##   ##  ##   ##   ## ##    ##  ##  "
        "\n\t\t##   ##   ##       ##      ##       ##   ##  # ### #   ##      "
        "\n\t\t## # ##   ## ##    ##      ##       ##   ##  ## # ##   ## ##   "
        "\n\t\t# ### #   ##       ##      ##       ##   ##  ##   ##   ##     " 
        "\n\t\t##   ##   ##  ##   ##  ##  ##   ##  ##   ##  ##   ##   ##  ##  "
        "\n\t\t##   ##  ### ###  ### ###   ## ##    ## ##   ##   ##  ### ### ");

        printf("\n\n\n\n\t\t\tCurrent Date And Time : %s", ctime(&t));

        printf("\n\n\n\n\t\t\t\tpress any key to continue.....");

        getch();

    }
    system("cls");
    {
        border();
        printf("\n");
        title();
        printf("\n");
        border();
    }
    
    printf("\n\n\t\t\t\t1---> ADD STUDENTS");
    printf("\n\t\t\t\t2---> MODIFY STUDENTS");
    printf("\n\t\t\t\t3---> SHOW ALL STUDENTS");
    printf("\n\t\t\t\t4---> IDNIVIDUAL VIEW");
    printf("\n\t\t\t\t5---> REMOVE STUDENT");
    printf("\n\t\t\t\t6---> CHANGE PASSWORD");
    printf("\n\t\t\t\t7--->LOGOUT\n\n\n");
    border();
    printf("\n\nCurrent date and time %s\n\n",ctime(&t));
    border();
    printf("\n\n");
    printf("ENTER YOUR CHOICE : --->");
    scanf("%d",&option);

    switch(option){
        case 1:add(fp);
                break;
        case 2:modify(fp);
                break;
        case 3:display(fp);
                break;
        case 4:Indivisual(fp);
                break;
        case 5:fp=del(fp);
                break;
        case 6:system("cls");
                password();
                break;
        case 7:return 1;
                break;
        default:
                printf("\n\t\t\tNO ACTION DETECTED");
                printf("\n\t\tPress Any Key");
                getch();
                system("pause");
    }
}

//functions for password

void password(){
    char c;
    printf("\nENTER NEW PASSWORD : ");
    fflush(stdin);
    gets(pa.pass);      //put data in pa.pass(in file)
    printf("SAVE PASSWORD (y/n) : ");
    fflush(stdin);
    scanf("%c",&c);
    if(c=='y' || c=='Y' ){
        tp=fopen("password.txt","w+");
        fwrite(&pa,sizeof(pa),1,tp);
        fclose(tp);
        printf("\n\t\tPassword Is saved");
    }
    else
    {
        printf("PASSWORD IS NOT SAVED...");
        printf("Press Any Key To Continue >>>>>");
        getch();
    }
}

//for adding records

void add(FILE * fp){
    border();
    printf("\n");
    title();
    printf("\n");
    border();

    char another ='y';
    Student s;
    int i;
    float cgpa;

    fseek(fp,0,SEEK_END);        //at the end of the data
    while(another=='y' ||another=='Y'){
        printf("\n\n\t\tENTER THE FULL NAME OF STUDENT : ");
        fflush(stdin);
        fgets(s.name,100,stdin);
    }
}