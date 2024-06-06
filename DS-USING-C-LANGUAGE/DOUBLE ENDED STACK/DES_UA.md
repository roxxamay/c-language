Alrighty, let's dive into this C program with a sense of humor and a bit of ASCII art to make it more engaging 🚀👨‍💻

### Header File Explanation

```c
//this is a header file for program used in differnt types od function in double ended stack using array
```

This line introduces our hero, the header file, which is like the script for a play. It tells us what functions we'll see on stage and how they interact.

```c
//this is created by @roxxadiiii
```

And here comes the playwright, @roxxadiiii, who has crafted this tale of stacks and arrays.

### Includes and Definitions

```c
#include"stdio.h"
#include"math.h"
#include"conio.h"
#include"cstdlib"
```

These lines are like inviting guests to the party. `stdio.h` brings the drinks (standard input/output), `math.h` the games (mathematical operations), `conio.h` the music system (console I/O), and `cstdlib` the snacks (general purpose functions).

```c
#define size 10
int info[size];
int top1=-1;
int top2=size;
```

Here, we're setting up the stage. `size` is our maximum capacity, `info` is where we'll store our items, and `top1` and `top2` keep track of where things go in and come out.

### Functions Explained

#### Pushing onto Stack One

```c
void push_one()
{
    int x;
    if(top1+1==top2)
    {
        printf("\nSTACK ONE IS FULL");
        return;
    }
    printf("\nENTER THE DESIRED NUMBER YOU WANT TO PUSH IN STACK ONE:");
    scanf("%d",&x);
    top1++;
    info[top1]=x;
}
```

Imagine you're at a crowded party. This function is like politely asking someone to move so you can fit one more person in. If the party's already at max capacity (`top1+1==top2`), you can't add anyone else. Otherwise, you ask for a number (`scanf`) and squeeze them in (`top1++`, `info[top1]=x`).

#### Pushing onto Stack Two

```c
void push_two()
{
    int x;
    if(top1+1==top2)
    {
        printf("STACK TWO IS FULL");
        return;
    }
    printf("\nENTER THE DESIRED NUMBER YOU WANT TO PUSH IN STACK TWO:");
    scanf("%d",&x);
    top2--;
    info[top2]=x;
}
```

This function is like trying to sneak another guest into the party through a back door. It works similarly to `push_one()`, but instead of increasing the count, it decreases it because this stack grows downwards.

### Pop and Peek Operations

The `pop_one()` and `pop_two()` functions are like removing guests from the party. They check if there's anyone left before trying to remove them. The `peep_one()` and `peep_two()` functions are like looking around the room to see who's there without disturbing them.

### Reverse Peek Operations

Finally, `rev_peep_one()` and `rev_peep_two()` are like turning on the disco lights and doing the Macarena. They show everything in reverse order, adding a fun twist to the evening.

### Conclusion

And that's our tale of two stacks 🎉 With these functions, you can manage a double-ended stack like a pro DJ managing a packed dance floor. Just remember, always check if the party (or stack) is full before trying to add more guests (elements). Happy coding, and may your stacks never overflow

Alrighty, let's dive into this C program with a side of humor and ASCII art to make it more entertaining 🚀👨‍💻

```c
//this is program is created by @roxxadiiii
//this program is created in order to do different types of funtion on doble ended stack
```

Line 1 & 2: Here we have our hero, @roxxadiiii, who's like the Leonardo da Vinci of C programming. He's crafted this masterpiece to manipulate double-ended stacks, which are like magical boxes that can add and remove items from both ends. It's like having a magic wand that can pull rabbits out of hats AND put them back!

```c
#include"DES_UA.H"
```

Line 4: This line is like the secret ingredient in a recipe. It includes the header file `DES_UA.H`, which contains all the spells (functions) needed to perform magic tricks on our double-ended stacks.

```c
int main(void)
{
    int ch;
    do{
        system("cls");
        printf("\n1.PUSH TO STACK ONE\n2.PUSH TO STACK TWO\n3.POP FROM STACK ONE\n4.POP FROM STACK TWO\n");
        printf("5.DISPLAY FROM STACK ONE\n6.DISPLAY FROM STACK TWO\n7.DISPLAY REVERSLY FROM STACK ONE\n8.DISPLAY REVERSLY FROM STACK TWO\n0.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push_one();
                      break;
            case 2:push_two();
                      break;
            case 3:pop_one();
                      break;
            case 4:pop_two();
                      break;
            case 5:peep_one();
                      break;
            case 6:peep_two();
                      break;
            case 7:rev_peep_one();
                      break;
            case 8:rev_peep_two();
                      break;
            case 0:exit(0);
            default:printf("\nDHYAAAN SE TYPE KR CHHOMU..");
        }
        getch();
    }
    while(2);
}
```

Lines 6-39: The `main` function is where the magic show begins. We start by clearing the stage with `system("cls")`, then present the audience with a menu of options to choose from. Each option corresponds to a different spell:

-   **Pushing** items onto one of two stacks (`push_one()` or `push_two()`) is like making a rabbit appear out of thin air.
-   **Popping** items off one of the stacks (`pop_one()` or `pop_two()`) is like making a rabbit disappear.
-   **Peeping** at the top item of a stack (`peep_one()` or `peep_two()`) is like peeking behind a curtain without revealing the whole act.
-   **Reversely peeping** (`rev_peep_one()` or `rev_peep_two()`) is like doing a magic trick backward, which might confuse the audience but still impresses them.

After each spell, we pause for a moment with `getch()`, allowing the audience to catch their breath before choosing another spell.

The loop continues until the magician decides to exit the stage with `exit(0)`. If the audience chooses an option that's not listed, the magician chuckles and says, "DHYAAAN SE TYPE KR CHHOMU.." which translates to "Oh, you typed something by mistake..", in a very patient and understanding manner.

This program is a delightful blend of functionality and entertainment, showcasing the power of C programming to create engaging applications.
