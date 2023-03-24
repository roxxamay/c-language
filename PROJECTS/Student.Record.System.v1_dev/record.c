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

    if((fp=fopen("db.txt","rb+"))==NULL)      //if file is not created
    {
        if((fopen("db.txt","wb+"))==NULL)       //then try to create one
        {
            printf("CAN'T CREATE OR OPEN DATABASE.");
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
    printf("\nSAVE PASSWORD (y/n) : ");
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
    system("cls");
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
        s.name[strlen(s.name)-1]='\0';      //to put the null char before the no of characters

        printf("\n\n\t\tENTER DEPERTMENT NAME : ");
        fflush(stdin);
        fgets(s.dept,50,stdin);
        s.dept[strlen(s.dept)-0]='\0';

        printf("\n\n\t\tENTER ROLL NUMBER : ");
        fflush(stdin);
        scanf("%d",s.roll);

        printf("\n\n\t\tENTER C.G.P.A : ");
        fflush(stdin);
        scanf("%f",&s.cgpa);

        //now write this value into .txt file

        fwrite(&s,sizeof(s),1,fp);

        border();

        printf("\n\n\t\tADD ANOTHER STUDENTS");
        fflush(stdin);
        another=getchar();
    }
}

FILE * del(FILE *fp){
    system("cls");
    border();
    printf("\n");
    title();
    printf("\n");
    border();

    Student s;
    int flag = 0 ,tempRoll,siz=sizeof(s);
    FILE *ft;

    if((ft=fopen("temp.txt","wb+"))==NULL){
        printf("\n\n\t\t\t\t!!!!!ERROR!!!!!\n\t\t");
        system("pause");
        return fp;
    }

    printf("\n\n\t\tENTER ROLL NUMBER OF STUDENT TO DELETE FROM THE RECORD");
    printf("\n\n\t\tROLL NUMBER : ");
    scanf("%d",&tempRoll);

    rewind(fp);         //sets the file position to the begining of the file


    while((fread(&s,siz,1,fp))==1){
        flag=1;
        printf("\n\t\tRECORD DELETED FOR");
        printf("\n\n\t\t%s\n\n\t\t%s\n\n\t\t%d\n\t",s.name,s.dept,s.roll);
        continue;
    }

    fwrite(&s,siz,1,ft);
    //write the value in temp file

    fclose(fp);
    fclose(ft);
    remove("db.txt");
    rename("temp.txt", "db.txt");       //changing the temp in main file

    if((fp=fopen("db.txt","rb+"))==NULL){
        printf("!!!!ERROR!!!!");
        return NULL;

    }
    if(flag==0){
        printf("\n\n\t\tNO STUDENT FOUND");
    }

    border();
    printf("\n\n\t");
    system("pause");
    return fp;

}

void display(FILE * fp){
    system("cls");
    border();
    printf("\n");
    title();
    printf("\n");
    border();

    Student s;
    int i ,siz = sizeof(s);

    rewind(fp);

    while((fread(&s,siz,1,fp))==1){
        printf("\n\t\tNAME : %s",s.name);
        printf("\n\n\t\tDEPERTMENT : %s",s.dept);
        printf("\n\n\t\tRoll : %d",s.roll);
        printf("\n\n\t\tC.G.P.A : %f\n\n",s.cgpa);
        border();
    }
    printf("\n\n\n\n\n");
    border();
    printf("\n");
    border();
    printf("\n");
    system("pause");
}


void Indivisual(FILE *fp){
    system("cls");
    border();
    printf("\n");
    title();
    printf("\n");
    border();

    int tempRoll,flag,siz,i;
    Student s;
    char another='y';

    siz=sizeof(s);

    while(another=='Y'||another=='y'){
        printf("\n\n\tENTER ROLL NUMBER : ");
        scanf("%d",&tempRoll);

        rewind(fp);     //for searching purpose we shoould always use this

        while((fread(&s,siz,1,fp))==1){
            if(s.roll==tempRoll){
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            printf("\n\n\t\tNAME : %s",s.name);
            printf("\n\n\t\tDEPERTMENT : %s",s.dept);
            printf("\n\n\t\tROLL : %d",s.roll);
            printf("\n\n\t\tC.G.P.A. : %f\n\n",s.cgpa);
            border();
        }
        else{
            printf("\n\n\t\t!!!!! ERROR RECORD NOT FOUND !!!!!");
        }
        printf("\n\n\t\tSHOW ANOTHER STUDENT INFORMATION (y/n)");
        fflush(stdin);
        another = getchar();
    }

}

void modify(FILE *fp){
    system("cls");
    border();
    printf("\n");
    title();
    printf("\n");
    border();

    Student s;
    int i,flag=0,tempRoll,siz;

    float cgpa;
    siz=sizeof(s);

    printf("\n\nENTER THE ROLL NUMBER OF THE STUDENTS : ");
    scanf("%d",&tempRoll);

    rewind(fp);

    while((fread(&s,siz,1,fp))==1){
        if(s.roll==tempRoll){
            flag = 1 ;
            break;
        }

    }

    if(flag==1){
        fseek(fp,-siz,SEEK_CUR);
        printf("\n\n\t\t\t\t\tRECORD FOUND\n\n\n");
        border();

        printf("\n\n\t\t\tSTUDENT NAME : %s",s.name);
        printf("\n\n\t\t\tSTUDENT ROLL : \n\n\n",s.roll);
        border();
        printf("\n\n\n\n\t\t\tENTER NEW DATA DOR THE STUDENT\n\n\n");
        border();

        printf("\n\n\n\t\t\tENTER FULL NAME OF STUDENT : ");
        fflush(stdin);
        fgets(s.name,100,stdin);
        s.name[strlen(s.name)-1]='\0';

        printf("\n\n\t\t\tENTER DEPERTAMENT : ");
        fflush(stdin);
        fgets(s.dept,50,stdin);
        s.dept[strlen(s.name)-1]='\0';

        printf("\n\n\t\t\tENTER ROLL NUMBER : ");
        scanf("%d",&s.roll);

        printf("\n\n\t\tENTER C.G.P.A. : ");
        scanf("%f",&s.cgpa);

        //now updat ein the file

        fwrite(&s,sizeof(s),1,fp);
    }
    else{
        printf("\n\n\t!!!! ERROR !!!! RECORD NOT FOUND");
    }

    printf("\n\n\t");
    system("pause");
}