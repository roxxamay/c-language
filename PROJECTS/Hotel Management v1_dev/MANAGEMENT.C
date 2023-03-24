/**
 * @file MANAGEMENT.C
 * @author @roxxamay
 * 
 * @brief this is the program for the 
 * @version 0.1
 * @date 2023-03-09
 * 
 * 
 */

//includes

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

//DECLEARING FUNCTIONS
void add(); // FUNCTIONS
void list();
void edit(); // GLOBALLY DECLARED FUNCTIONS N VARIABLE
void delete1();
void search();

//for color

void setcolor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
    {
        wColor = (csbi.wAttributes & 0xB0) + (ForgC & 0x0B);
        SetConsoleTextAttribute(hStdOut,wColor);
    }
}

void login_page() // login page
{
    int a = 0, i = 0;
    char uname[10], c = ' ';
    char pword[10];
    char user[10] = "lucifer";
    char pass[10] = "roxxamay";
    do
    {
        system("cls");

        printf("\n****************************************************************");
        printf("\n****************************************************************");
        printf("\n                                                                ");
        printf("\n                  WELCOME   TO  LOGIN  PAGE                     ");
        printf("\n            USERNAME:-");
        scanf("%s", &uname);
        printf("\n            PASSWORD:-");
        {
            while (i < 10)
            {
                pword[i] = getch();
                c = pword[i];
                if (c == 13)
                    break; // always false
                else
                {
                    printf("*");
                }
                i++;
            }
            pword[i] = '\0'; // char code = pword ;  //putting null into the last index
            i = 0;           // scanf("%s",&pword) ;  //zeroing the counter for future use

            if (strcmp(uname, user) == 0 && strcmp(pword, pass) == 0)
            {
                printf(" \n\n\n     WELCOME  !!!!! LOGIN IS SUCCESSFUL");
                break;
            }
            else
            {
                printf("  \n\n\n   WELCOME   !!!!! LOGIN IS UNSUCCESSFULL");
                a++; // counter for wrong password
                getch();
            }
        }

    } while (a <= 2);
    if (a > 2)
    {
        printf("\n SORRY YOU HAVE ENTERED THE WRONG USERNAME AND PASSWORD FOR FOUR TIMES !!!");

        getch();
    }

    system("cls");
}

// DECLARING STRUCTURES

struct CustomerDetails
{
    char roomnumber[10];
    char name[20];
    char address[25];
    char phoneaddress[25];
    char nationality[15];
    char email[20];
    char period[10];
    char arrivaldate[10];
} s;

// MAIN FUNCTION

int main()
{
    int i = 0;

    time_t t; // to getting the system time
    time(&t); // putting the time into a variable

    char customername;
    char choice;

    system("cls"); // for clearng the screen

    setcolor(15);
    puts(
        "______________________________________________________________________________________\n"
        "|\t\t##   ##  ### ###  ####      ## ##    ## ##   ##   ##  ### ###         |\n"
        "|\t\t##   ##   ##  ##   ##      ##   ##  ##   ##   ## ##    ##  ##         |\n"
        "|\t\t##   ##   ##       ##      ##       ##   ##  # ### #   ##             |\n"
        "|\t\t## # ##   ## ##    ##      ##       ##   ##  ## # ##   ## ##          |\n"
        "|\t\t# ### #   ##       ##      ##       ##   ##  ##   ##   ##             |\n"
        "|\t\t##   ##   ##  ##   ##  ##  ##   ##  ##   ##  ##   ##   ##  ##         |\n"
        "|\t\t##   ##  ### ###  ### ###   ## ##    ## ##   ##   ##  ### ###         |\n"
        "|\t\t                                                                      |\n"
        "|\t\t#### ##   ## ##            #### ##  ###  ##  ### ###                  |\n"
        "|\t\t# ## ##  ##   ##           # ## ##   ##  ##   ##  ##                  |\n"
        "|\t\t  ##     ##   ##             ##      ##  ##   ##                      |\n"
        "|\t\t  ##     ##   ##             ##      ## ###   ## ##                   |\n"
        "|\t\t  ##     ##   ##             ##      ##  ##   ##                      |\n"
        "|\t\t  ##     ##   ##             ##      ##  ##   ##  ##                  |\n"
        "|\t\t ####     ## ##             ####    ###  ##  ### ###                  |\n"
        "|\t\t                                                                      |\n"
        "|\t\t##   ##    ####   ### ##     ##      ## ##   ### ###                  |\n"
        "|\t\t##   ##     ##     ##  ##    ##     ##   ##   ##  ##                  |\n"
        "|\t\t# ### #     ##     ##  ##   ## ##   ##        ##                      |\n"
        "|\t\t## # ##     ##     ## ##    ##  ##  ##  ###   ## ##                   |\n"
        "|\t\t##   ##     ##     ## ##    ## ###  ##   ##   ##                      |\n"
        "|\t\t##   ##     ##     ##  ##   ##  ##  ##   ##   ##  ##                  |\n"
        "|\t\t##   ##    ####   #### ##  ###  ##   ## ##   ### ###                  |\n"
        "|______________________________________________________________________________________\n");

    for (i = 0; i < 80; i++)
    {
        printf("-");
    }
    printf("\n\t\tCURRENT DATE AND TIME : %s", ctime(&t));
    for (i = 0; i < 80; i++)
    {
        printf("-");
    }
    printf("\n\t\t\tDESIGNED BY @roxxadiiii");
    printf("\n\t\tPRESS ANY KEY TO CONTINUE:");
    getch();
    system("cls");
    login_page();
    system("cls");

    while (1) // infinite loop
    {
        system("cls");
        setcolor(10);
        for (i = 0; i < 80; i++)
        {
            printf("-");
        }
        printf("\n");
        printf("   ******************************  |MAIN MENU|  ***************************** \n");
        for (i = 0; i < 80; i++) // BORDER
        {
            printf("-");
        }
        printf("\n");

        setcolor(10);
        printf("\t\t  **PLEASE ENTER YOUR CHOICE FOR MENU**");
        printf("\n\n");
        printf("\n  ENTER 1 -> BOOK A ROOM");
        printf("\n------------------------------------");
        printf("\n  ENTER 2 -> VIEW CUSTOMER RECORD");
        printf("\n------------------------------------");
        printf("\n  ENTER 3->  DELETE CUSTOMER RECORD");
        printf("\n------------------------------------");
        printf("\n  ENTER 4-> SEARCH CUSTOMER RECORD");
        printf("\n------------------------------------");
        printf("\n  ENTER 5-> EDIT CUSTOMER RECORD");
        printf("\n------------------------------------");
        printf("\n  ENTER 6->  EXIT");
        printf("\n------------------------------------");
        printf("\n");
        for (i = 0; i < 80; i++)
        {
            printf("-");
        }
        printf("\nCurrent Date And Time : %s", ctime(&t));
        for (i = 0; i < 80; i++)
        {
            printf("-");
        }
        printf("\nENTER YOUR CHOICE:");
        choice = getche();        // inputing the choice
        choice = toupper(choice); // to convert into upper case

        switch (choice)
        {
        case '1':
            add();
            break;
        case '2':
            list();
            break;
        case '3':
            delete1();
            break;
        case '4':
            search();
            break;
        case '5':
            edit();
            break;
        case '6':
            system("cls");
            printf("\n\n\t  *****THANK YOU***** ");
            printf("\n\t    FOR TUSTING OUR SERVICE");
            exit(0);
            break;
        default:
            system("cls");
            printf("INCORRECT INPUT");
            printf("\npress any key to continue");
            getch();
        }
    }
}

void add()
{
    FILE *f; // open a external file in same directory
    char test;
    if (f == 0)
    {
        f = fopen("add.txt", "w+"); // w+ stands for writable and readable file which is created
        system("cls");
        printf("PLEASE HOLD WHILE WE SET OUR DATABASE IN YOUR COMPUTER");
        printf("\n\n\tPROCESS COMPLETED PRESS ANY KEY TO CONTINUE !! ");
        getch();
    }

    while (1) // ALWAYS TRUE
    {
        system("cls");
        printf("\nENTER CUSTOMER DETAILS : ");
        printf("\n**************************");
        printf("\nENTER ROOM NUMBER:");
        scanf("%s", s.roomnumber);
        fflush(stdin);
        printf("\n\nENTER NAME:\n");
        scanf("%s", &s.name);
        printf("ENTER ADDRESS:\n");
        scanf("%s",s.address);
        printf("\n\nENTER PHONE NUMBER:");
        scanf("%s", &s.phoneaddress);
        printf("\n\nNATIONALITY:");
        scanf("%s", &s.nationality);
        printf("\n\nENTER EMAIL:");
        scanf("%s", &s.email);
        printf("\n\nENTER THE PERIOD OF STAY(in days):");
        scanf("%s", &s.period);
        printf("\n\nENTER ARRIVIAL DATE(dd\\mm\\yyyy):");
        scanf("%s", &s.arrivaldate);
        fwrite(&s, sizeof(s), 1, f); // this write the data to the file   fwrite(strg,sizeofdata,no of data,file name)
        fflush(stdin);
        printf("\n\n ONE ROOM SUCCESSFULLY BOOKED!!");
        printf("\n\npress esc key to exit, any other key to add another customer details:");
        test = getche();
        if (test == 27) // value of escape key
        {
            break;
        }
    }
    fclose(f); // close the file
}

void list()
{
    FILE *f;
    int i;
    if ((f = fopen("add.txt", "r")) == NULL) // read only mode in opened file
    {
        exit(0);
    }

    system("cls");
    printf("ROOM    ");
    printf("NAME\t ");
    printf("\tADDRESS ");
    printf("\tPHONENUMBER ");
    printf("\tNATIONALITY ");
    printf("\tEMAIL ");
    printf("\t\t  PERIOD ");
    printf("\t ARRIVALDATE \n");

    for (i = 0; i < 118; i++)
    {
        printf("-");
    }
    while (fread(&s, sizeof(s), 1, f) == 1) // alwaz true until zero
    {
        printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  %s", s.roomnumber, s.name, s.address, s.phoneaddress, s.nationality, s.email, s.period, s.arrivaldate);
    }
    printf("\n");
    for (i = 0; i < 118; i++)
    {
        printf("-");
    }
    fclose(f);
    getch();
}



void search()
{
    system("cls");
    FILE *f;
    char roomnumber[20];
    int flag=1;                 //flag
    f=fopen("add.txt","r+");
    if(f==0);
    {
        exit(0);
    }
    fflush(stdin);
    printf("Enter Room Number of the customer to search its details: \n");
    scanf("%s",roomnumber);
    while(fread(&s,sizeof(s),1,f)==1)
    {
        if(strcmp(s.roomnumber,roomnumber)==0)
        {
            flag=0;
            printf("\n\tRECORD FOUND\n ");
            printf("\nRoom Number: \t%s",s.roomnumber);
            printf("\nName Number: \t%s",s.name);
            printf("\nAddress : \t%s",s.address);
            printf("\nPhone Number : \t%s",s.address);
            printf("\nNationality :\t%s",s.nationality);
            printf("\nEmail : \t%s",s.email);
            printf("\nPeriod : \t%s",s.period);
            printf("Arrival Date : \t%s",s.arrivaldate);
            flag=0;
            break;
        }
        if(flag=1)
        {
            printf("\n\tREQUESTED CUSTOMER COULD NOT BE FOUND..!");

        }
        getch();
        fclose(f);
    }
}

void edit()
{
    FILE *f;
    int k=1;
    long int size=sizeof(s);
    char roomnumber[20];
    if((f=fopen("add.txt","r+"))==NULL)
    {
        exit(0);
    }
    system("cls");
    printf("Enter Room Number of the customer to edit:");
    scanf("%s",roomnumber);
    fflush(stdin);
    while(fread(&s,sizeof(s),1,f)==1)       //until null
    {
        if(strcmp(s.roomnumber,roomnumber)==0)
        {
            k=0;
            printf("\nEnter Room Number :\t");
            gets(s.roomnumber);
            printf("\nEnter Name:\t");
            fflush(stdin);
            scanf("%s",&s.name);
            printf("\nEnter Address :\t");
            scanf("%s",&s.address);
            printf("\nEnter Phoneaddress :\t");
            scanf("%s",s.phoneaddress);
            printf("\nEnter Nationlity: \t");
            scanf("%s",&s.nationality);
            printf("\nEnter Email: \t");
            scanf("%s",&s.email);
            printf("\nEnter Period: \t");
            scanf("%s",&s.period);
            printf("\nEnter Arrivival Date :\t");
            scanf("%s",&s.arrivaldate);
            fseek(f,size,SEEK_CUR);     //to go the desired postion in file
            fwrite(&s,sizeof(s),1,f);
            break;
        }
    }

    if (k == 1)
    {
        printf("\n\nTHE RECORD DOESN'T EXIST..!!!!");
        fclose(f);
        getch();
    }
    else
    {
        fclose(f);
        printf("\n\n\n\tYOUR RECORD OS SUCCESSFULLY EDITED!!!");
        getch();
    }
}





void delete1()
{
    FILE *f, *t;
    int i = 1; // flag
    char roomnumber[20];
    if ((t = fopen("temp.txt", "w")) == NULL)
    {
        exit(0);
    }
    if ((f = fopen("add.txt", "r")) == NULL)
    {
        exit(0);
    }

    system("cls");
    printf("ENTER THE ROOM NUMBER OF THE HOTEL TO BE DELETED FROM THE DATA BASE:");
    fflush(stdin);
    scanf("%s", &roomnumber);
    while (fread(&s, sizeof(s), 1, f) == 1) // alwzz true until null
    {
        if (strcmp(s.roomnumber, roomnumber) == 0)
        {
                        i = 0; // use of flag
                        continue;
        }
        else
        {
                        fwrite(&s, sizeof(s), 1, t);
        }
    }
    if (i == 1)
         // use of flag
    {
        printf("\n\nRECORDS OF THE CUSTOMER IN THIS ROOM IS NOT FOUND!!");
        getch();
        fclose(f);
        fclose(t);
        main();
    }
    fclose(f);
    fclose(t);
    remove("add.txt");
    rename("temp.txt", "add.txt");
    printf("\n\nTHe customer is successfully removed....!!");
    fclose(f);
    fclose(t);
    getch();
}