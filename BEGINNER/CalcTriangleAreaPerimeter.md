### Code Explanation

#### Code Snippet

```c
#include"main.h"

int main() {
    int a, b, c, s, p, ar;
    printf("\nENTER THE 1ST SIDE OF TRIANGLE:  ");
    scanf("%i", &a);
    printf("\nENTER THE 2ND SIDE OF TRIANGLE:  ");
    scanf("%i", &b);
    printf("\nENTER THE 3RD SIDE OF TRIANGLE:  ");
    scanf("%i", &c);
    // Calculation
    s = (a + b + c) / 2;
    ar = sqrt(s * (s - a) * (s - b) * (s - c));
    p = a + b + c;
    printf("\nHENCE THE AREA:  %i", ar);
    printf("\nHENCE THE PERIMETER:  %i", p);
    getch();
}
```

#### Explanation

##### Comments as Questions and Answers

1. **What does `#include"main.h"` mean?**

   -  This directive tells the preprocessor to include the contents of the header file `main.h`. Header files typically contain declarations of functions, constants, and other identifiers that are used across multiple source files.

2. **What is the purpose of the `main()` function?**

   -  The `main()` function is the entry point of every C program. When the program starts, control begins at the `main()` function.

3. **What does `int a, b, c, s, p, ar;` declare?**

   -  This line declares six integer variables: `a`, `b`, `c`, `s`, `p`, and `ar`. These will store the sides of the triangle, the semi-perimeter, the area, and the perimeter.

4. **How does `printf` work?**

   -  `printf` is a standard library function used for formatted output. It prints the string passed as its first argument to stdout (usually the terminal).

5. **What does `scanf` do?**

   -  `scanf` is a standard library function used for reading formatted input from stdin (usually the keyboard). It reads the input according to the format specified and stores it in the variable pointed to by the second argument.

6. **What is the significance of `getch();`?**
   -  `getch()` is a non-standard function often found in graphics libraries. In this context, it waits for the user to press a key before continuing. It's used here likely to pause the program so the user can see the output before the window closes.

##### Line-by-Line Explanation

-  **Line 1-2:** Include the header file `main.h`. This file might contain necessary function prototypes, macros, or global definitions needed by the program.
-  **Lines 4-6:** Declare the `main` function, which is the entry point of the program.
-  **Line 7:** Inside `main`, declare and initialize six integer variables: `a`, `b`, `c`, `s`, `p`, and `ar`.
-  **Lines 9-11:** Prompt the user to enter the lengths of the triangle's sides and read these inputs using `scanf`.
-  **Line 13:** Calculate the semi-perimeter `s` of the triangle using the formula `(a + b + c) / 2`.
-  **Line 14:** Calculate the area `ar` of the triangle using Heron's formula: `sqrt(s * (s - a) * (s - b) * (s - c))`.
-  **Line 15:** Calculate the perimeter `p` of the triangle simply by adding the lengths of its sides.
-  **Lines 17-18:** Print the calculated area and perimeter to the console.
-  **Line 19:** Wait for the user to press a key before closing the program window.

##### Dry Run

Let's assume the user enters `3`, `4`, and `5` as the sides of the triangle.

-  `a = 3`, `b = 4`, `c = 5`
-  `s = (3 + 4 + 5) / 2 = 6`
-  `ar = sqrt(6 * (6 - 3) * (6 - 4) * (6 - 5)) = sqrt(72) ≈ 8.49`
-  `p = 3 + 4 + 5 = 12`

So, the output will be:

```
HENCE THE AREA:  8
HENCE THE PERIMETER:  12
```

##### Additional Context

This program demonstrates basic input/output operations, arithmetic calculations, and the use of the `sqrt` function from the math library for square root calculations. Understanding these concepts is crucial for beginners learning C programming.
