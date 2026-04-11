#include <stdio.h>
// Recursive functions

int factorial(int number){
    
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else{
        return number * factorial(number - 1);
    }
}

int main(){

    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);
    printf("The factorial of %d is : %d\n",num, factorial(num));

    return 0;
}