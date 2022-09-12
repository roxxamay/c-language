/*********************************************************************
write program to find the distance between two co ordinate point?
********************************************************************/

#include"main.h"

int main()
{
    int z,x,y,a,b;
    printf("HERE (X,Y) ARE THE CORDINATE OF THE 1ST POINT AND (A,B) ARE THE CORDINATE OF THE SECONT POINT");
    printf("\nINTPUT THE CORDINATE OF 1ST POINT IN FORM OF (X,Y):  ");
    scanf("%i,%i",&x,&y);
    printf("\nINTPUT THE CORDINATE OF 1ST POINT IN FORM OF (a,b):  ");
    scanf("%i,%i",&a,&b);
    
    //calculation

    z=sqrt(((a-x)*(a-x))+((b-y)*(b-y)));

    printf("\nHENCE THE DISTANCE BETWEEN THE TWO POINTS ARE:  %i",z);
    getch();

}