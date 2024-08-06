/**
 * @file CharacterInputDemo.c
 * @author roxxamay (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-08-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 /*
 Title: **Character Input Collection Challenge**

Problem Statement:
You are tasked with creating a console application in C that demonstrates the usage of different functions for capturing single-character inputs from the user. Your program should clearly differentiate between the following functions:

1. `getch()`: This function reads a single character without echoing it back to the screen.
2. `getche()`: Similar to `getch()`, but it echoes the entered character back to the screen before returning it.
3. `getchar()`: Reads a single character from standard input (the keyboard) and returns it as an unsigned char cast to an int, or EOF on end of file or error.
4. `scanf()`: A more general function used for reading formatted input, including characters. In this case, you will use it to read a single character.

Your program should prompt the user to enter four characters using each of these functions in sequence. After collecting all four characters, print them out to the console. Ensure that your program handles any potential errors gracefully, such as when the user enters non-character input.

Example Flow:
1. Prompt the user to enter the first character using `getch()`.
2. Prompt the user to enter the second character using `getche()`.
3. Prompt the user to enter the third character using `getchar()`.
4. Prompt the user to enter the fourth character using `scanf()`.

After collecting all inputs, print them out in the format: `a=<first_char>, b=<second_char>, c=<third_char>, d=<fourth_char>`.

Constraints:
- Your solution must compile and run correctly on a Linux environment.
- Use only standard libraries available in C.

Functionality Requirements:
- The program should successfully collect four characters from the user using the specified functions.
- It should handle and display any errors appropriately.
- The final output should match the specified format.

Bonus (Optional): Extend your program to handle cases where the user might not enter a character (e.g., entering a number instead). Display an appropriate error message in such cases.

This challenge tests your understanding of input/output operations in C, particularly with handling characters and strings, and your ability to work with different functions for achieving similar outcomes.
  */
/*********************************************************************
determine between getch,getche,getchr.
********************************************************************/

#include"main.h"
int main()
{
    char a,b,c,d;


    printf("\nENTER YOUR FIRST CHARACTER:");
    a=getch();

    printf("\nENTER YOUR SECOND CHARACTER:");
    b=getche();

    printf("\nENTER YOUR THIRD CHARACTER:");
   
    c=getchar();

    printf("\nENTER YOUR FOURTH CHARACTER:");
    
    scanf("%c",&d);

    printf("\na=%c\nb=%c\nc=%c\nd=%c",a,b,c,d);

    getch();

}