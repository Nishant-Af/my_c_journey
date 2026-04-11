#include <stdio.h>

int a = 344; // this is a global variable and We can aceess this all over the program
void globe(){
    printf("The Address of 'a' as global Variable : %p\n" , &a);
}

int func1(int a)
{
    printf("The Address of A in func1 is : %p\n", &a);
    static int myvar; // without initialzing the default value of myvar is 0;
    myvar++;          // static variable intact it's value so he skip static int myvar statement;
    printf("%d\n", myvar);
}


int main()
{
    globe();
    // this is  not a Static Variable;
    int a = 43; // this is a local variable and it's have precidience over global variable in any function
    int b = func1(a);
    b = func1(a);
    b = func1(a);
    b = func1(a);

    // static int output = func1(); this is false because static hold a constant value not any function value which can be changed by function

    printf("The Address of a in main function is : %p\n", &a);



    return 0;
}