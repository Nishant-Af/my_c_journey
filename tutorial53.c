#include <stdio.h>

int main()
{

    int a = 34;
    int *ptr = &a;
    // ptr = NULL;

    // printf("The Address of a is %d\n", ptr);
    // printf("The VAlue of a is %d\n", *ptr);

    if (ptr != NULL)
    {
        printf("The Value of Pointer is %d\n", *ptr);
    }
    else
    {
        printf("The Pointer is a Null Pointer and cannot be defreferenced ");
    }

    return 0;
}