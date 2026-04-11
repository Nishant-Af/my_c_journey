#include <stdio.h>

int main()
{

    // Void Pointer in C language
    void *ptr;
    int a = 34;
    float b = 8.33;

    ptr = &b;
    // printf("The Value of b is %d\n", *ptr); this is wrong

    printf("The VAlue of b is %f\n", *((float *)ptr));
    ptr = &a;
    printf("The VAlue of a is %d\n", *((int *)ptr));

    return 0;
}