#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 334;
    int *ptr; // this is a wild pointer
    // *ptr = 34; // this is wrong thing to do
    ptr = &a; // since ptr is no longer a wild pointer
    printf("The Value of a is %d\n", *ptr);

    return 0;
}