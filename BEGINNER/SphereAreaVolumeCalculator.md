
### Code Snippet

```c
#include"main.h"

int main() {
    float r, a, v, m;
    printf("\nEnter the desired length of radius: ");
    scanf("%f", &r);
    v = 4 * 3.14 * r * r * r / 3;
    a = 4 * 3.14 * r * r;
    printf("\nHence area = %f\n", a);
    printf("Hence volume = %f\n", v);
    getch();
}
```

### Explanation

1. **Include Directive (`#include "main.h"`):**
   - This directive tells the preprocessor to include the contents of the header file named "main.h" in the program. Header files typically contain declarations of functions, macros, and other entities that are used across multiple source files.

2. **Main Function Declaration (`int main()`):**
   - The `main` function is the entry point of every C program. When the program starts, control begins at the `main` function. The return type `int` indicates that the function will return an integer value upon completion.

3. **Variable Declarations:**
   - `float r, a, v, m;`: Declares four floating-point variables: `r` for the radius of the sphere, `a` for the surface area, `v` for the volume, and `m` which is declared but not used in the provided code snippet.

4. **Printing Prompt:**
   - `printf("\nEnter the desired length of radius: ");`: Uses the `printf` function to display a prompt asking the user to enter the radius of the sphere.

5. **Reading Input:**
   - `scanf("%f", &r);`: Reads a floating-point number from the standard input (usually the keyboard) and stores it in the variable `r`. The `%f` format specifier is used for floating-point numbers.

6. **Calculating Volume and Surface Area:**
   - `v = 4 * 3.14 * r * r * r / 3;`: Calculates the volume of the sphere using the formula `(4/3) * π * r^3`. Note that `3.14` is used as an approximation of π.
   - `a = 4 * 3.14 * r * r;`: Calculates the surface area of the sphere using the formula `4 * π * r^2`.

7. **Displaying Results:**
   - `printf("\nHence area = %f\n", a);`: Prints the calculated surface area of the sphere.
   - `printf("Hence volume = %f\n", v);`: Prints the calculated volume of the sphere.

8. **Waiting for Key Press:**
   - `getch();`: Waits for the user to press a key before terminating the program. This is often used in console applications to prevent the window from closing immediately after the program finishes executing.

### Dry Run

Let's assume the user enters `5.0` as the radius.

- The program prompts the user to enter the radius.
- The user inputs `5.0`.
- The program calculates the volume: `v = 4 * 3.14 * 5 * 5 * 5 / 3 = 523.598`.
- The program calculates the surface area: `a = 4 * 3.14 * 5 * 5 = 314`.
- The program prints the surface area: `Hence area = 314.000000`.
- The program prints the volume: `Hence volume = 523.598000`.
- The program waits for the user to press a key before exiting.

### Additional Context

This program demonstrates basic input/output operations, arithmetic calculations, and the use of constants in C. Understanding these concepts is crucial for beginners learning C programming.