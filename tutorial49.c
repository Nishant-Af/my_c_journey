#include <stdio.h>
// #include "temp.c"

// int sum;     // this is a global variable;
int func1(int a, int b)
{
    // auto int sum;
    // extern int sum;
    static int myvar;
    myvar++;
    printf("The MyVar is : %d\n", myvar);
    // sum = a + b;
    // return sum;

}

int sum = 343;

int main()
{

    // Decelaration - Telling the compiler about the Variable (No Memmory Reversed)
    // Definition  - Decleartion + Memory Reversed
    // int sum = func1(3,5);
    // int sum = 98;
    // printf("The Sum is : %d\n", sum);

    register int myvar = func1(3,5);
    myvar = func1(3,5);
    myvar = func1(3,5);
    myvar = func1(3,5);
    myvar = func1(3,5);

    return 0;
}