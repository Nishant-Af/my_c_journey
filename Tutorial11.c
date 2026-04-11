#include <stdio.h>

// switch case statement in c

int main(){

    int age,marks;
    printf("Enter Your age : ");
    scanf("%d",&age);
    printf("Enter Your Marks : ");
    scanf("%d",&marks);

    // use of break is not must. if we wanna execute all the statement after matching a particular case so we can't use break statement 
    // we only use int and char in switch and case 
    // we can also use switch case inside a switch case 

    switch (age)
    {
    case 1:
        printf("Your age is 1\n");
        switch (marks)
        {
        case 50:
            printf("Your marks is 50\n");
            break;
        
        default:
            break;
        }
    case 2:
        printf("Your age is 2\n");
        break;
    case 3:
        printf("Your age is 3\n");
    case 4:
        printf("Your age is 4\n");
        break;  //break is not mandotry or it not must
    case 5:
        printf("Your age is 5\n");
    case 6:
        printf("Your age is 6\n");
        break;
    case 7:
        printf("Your age is 7\n");
        break;
    case 8:
        printf("Your age is 8\n");
    case 9:
        printf("Your age is 9\n");
        break;
    case 10:
        printf("Your age is 10\n");
    
    default:
    printf("You are/'nt exist !! ");
        break;
    }
        
}