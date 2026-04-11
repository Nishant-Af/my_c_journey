#include <stdio.h>
#define PI 3.14  // an another way to use constant in c PI is variable and #define use to initialize and declare variable

// format specifier , constant and escape sequence and comments in c
int main()
{
    // PI = 44; it can't changed since PI is Constant 
    // 3.14 != 44 so its incorrect 
    // foramt specifier is a way to tell to the compiler what type of data type is in a variable;

    int a = 8;
    // const --> cannot be changed after intializing the value of a variavble
    const float b = 7.33;
    printf("The valus of a is %d and the value of b is %f\n", a, b);
    printf("%10.4f\n", b);     //%.4f give the accuracy of 4 decimal and the %10.0f give the offset of whitespacees positive give space before number
    printf("%-20.4f This", b); //-20.0f give the offset of -20 whitespacees negative give space after number
    /*
                                Some foramt specifier 

    %d or %i --> integer
    %f  --> float
    %c  --> character
    %l  --> long int
    %lf --> double float
    %LF --> long double
    %lu --> unsigned long integer 
    */

    // Escape sequence in c --> is a sequence in programing language is a sequence of characters
    // it doesn't use itself when used inside stirng literal or caharacter
    // it is comp two or more characters starting with blackslash \ for example : \n new line 

    /*
    \a --> alarm or beep 
    \n --> new line
    \b --> backaspace
    \t --> tab
    \0 --> null
    \\ --> blackalash
    \' --> single quote
    \" --> double quote
    \? --> question mark
    \r --> carriage return
    \nnn --> octal
    \xhh --> hexadecimal
    \v --> vertical tab
    \f --> form feed 
    */

    printf("This is a tab \t\t , this is backslash \\ , this is double quote \" and this is a alarm or beep \a this is a newline \n and this is a feed \f");

    // comments in C --> it can't execute and compiler remove comments when do preprocessing it is used in functions to tell programmers what the functions do or its a summmary of what a program do ?

    // this is a single line commment 
    /*
    this 
    is 
    a
    multiline 
    comment 
    
    */
    return 0;

}