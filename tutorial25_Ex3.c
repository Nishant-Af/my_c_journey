#include <stdio.h>

// Exercise No 3 Recursive Functions

int fub_recursive(int n)
{

    if (n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        return fub_recursive(n - 1) + fub_recursive(n - 2);
    }
}

int main()
{

    int a, b;
    a = 0;
    b = 1;
    int numeric;
    int range = 0;
    printf("Enter a Number To find fibonaaci Series :  ");
    scanf("%d", &numeric);

    for (int i = 0; i < numeric - 1; i++)
    {

      b = a + b;
      a = b - a; 
    }

    printf("The Fibonaic Number of %d is %d\n", numeric, a);

    return 0;
}
