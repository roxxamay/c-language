#### Code Snippet

```c
#include"main.h"

int main() {
    float p,r,si,a;
    int t;
    printf("\nENTER THE PRINCIPAL:  ");
    scanf("%f",&p);
    printf("\nENTER THE RATE:  ");
    scanf("%f",&r);
    printf("\nENTER THE TIME:  ");
    scanf("%i",&t);
    // calculation
    si=p*r*t/100.0;
    a=p+si;
    printf("\nHENCE SIMPLE INTREST:  %f",si);
    printf("\nHENCE AMOUNT:  %f",a);
    getch();
}
```

#### Explanation

##### 1. Preprocessor Directive

-  `#include"main.h"`: This directive tells the preprocessor to include the contents of the header file `main.h`. Header files typically contain declarations of functions, constants, and macros that are used across multiple source files.

##### 2. Function Definition

-  `int main()`: This defines the entry point of the C program. Every C program must have a `main` function where the execution begins. The `int` return type indicates that the function will return an integer value, which is a convention for indicating successful termination.

##### 3. Variable Declarations

-  `float p,r,si,a;`: Declares four floating-point variables: `p` for principal amount, `r` for rate of interest, `si` for simple interest, and `a` for the total amount after adding interest.
-  `int t;`: Declares an integer variable `t` for the time period.

##### 4. Input Operations

-  `printf("\nENTER THE PRINCIPAL:  ");`: Prints a prompt asking the user to enter the principal amount.
-  `scanf("%f",&p);`: Reads the floating-point number entered by the user and stores it in the variable `p`.
-  Similar `printf` and `scanf` statements are used for reading the rate of interest (`r`) and the time period (`t`).

##### 5. Calculation

-  `si=p*r*t/100.0;`: Calculates the simple interest using the formula `si = p * r * t / 100`. Note the division by `100.0` to ensure floating-point division.
-  `a=p+si;`: Calculates the total amount after adding the interest to the principal.

##### 6. Output Operations

-  `printf("\nHENCE SIMPLE INTREST:  %f",si);`: Prints the calculated simple interest.
-  `printf("\nHENCE AMOUNT:  %f",a);`: Prints the total amount after adding interest.

##### 7. getch() Function

-  `getch();`: Waits for the user to press a key before terminating the program. This is often used in console applications to prevent the window from closing immediately.

#### Comments as Questions and Answers

-  **Q:** What is the purpose of including `main.h`?

   -  **A:** To include necessary declarations and definitions from the header file `main.h`.

-  **Q:** How does the program calculate the simple interest?

   -  **A:** By multiplying the principal amount, rate of interest, and time period, then dividing by 100 to convert the rate to a percentage.

-  **Q:** Why is `100.0` used in the calculation instead of `100`?
   -  **A:** To ensure that the division operation results in a floating-point result rather than integer division, which would truncate the decimal part.

#### Dry Run

1. User enters a principal amount, say `5000`.
2. User enters a rate of interest, say `5`.
3. User enters a time period, say `2`.
4. Calculate `si = 5000 * 5 * 2 / 100 = 500`.
5. Calculate `a = 5000 + 500 = 5500`.
6. Print `SIMPLE INTEREST:  500.000000`.
7. Print `AMOUNT:  5500.000000`.
8. Wait for user input before exiting.

#### Additional Context

This program demonstrates basic input/output operations, arithmetic calculations, and control flow in C. Understanding these concepts is crucial for beginners learning C programming.
