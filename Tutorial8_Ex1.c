#include <stdio.h>

int main()
{
    /*
    Print Multiplication Table of a number entered by the user in pretty form 

    Example:
    Input
    Enter The Number You want Multiplication Table of:
    1

    Output:
    Table of 6:
    1 X 1 = 1
    1 X 2 = 2

    */
    int num;
    printf("Enter the Number You Want Multiplication table of : ");
    scanf("%d",&num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d : %d\n", num, i, num * i);
    }
    
    return 0;
}
