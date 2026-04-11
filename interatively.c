#include <stdio.h>

int main(){

    int num;
    int fact;
    printf("Enter a Number : ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        fact = (num * (num-i));
    }
    printf("%d\n", fact);

    return 0;
}