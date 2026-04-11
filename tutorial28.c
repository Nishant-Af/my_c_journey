#include <stdio.h>

int fib_recursive(int n){

    if (n == 1 || n == 2)
    {
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
    
}

int fib_iterative(int n){
    int a,b;

    a = 0;
    b = 1;

    for (int i = 0; i < n-1; i++)
    {
        b = a + b;
        a = b-a;
    }

    return a;
    
}

int main(){

    int numeric;
    printf("Enter no to get fubannic series : ");
    scanf("%d", &numeric);
    printf("The Value of fibonaaci number at position no %d using iterative approach is %d\n", numeric, fib_iterative(numeric));
    printf("The Value of fibonaaci number at position no %d using revursive approach is %d\n", numeric, fib_recursive(numeric));
    return 0;

}

