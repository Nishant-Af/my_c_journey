#include <stdio.h>

// if, else, elseif 
int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You can Vote!");
    }
    else if (age >= 10)
    {
        printf("your age is between 10 and 18 so You can vote for kids");
    }
    else if (age >= 1)
    {
        printf("Your age is between 1 and 10 since you can vote for babies");
    }
    else
    {
        printf("You cannot Vote!");
    }

    return 0;
}