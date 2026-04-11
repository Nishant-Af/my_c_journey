#include <stdio.h>
// Break and Continue Statement in C 

int main(){

    int i, age;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter Your age : ");
        scanf("%d",&age);

        // if (age>10)
        // {
        //     break;  //if condition becomes true then the loop breaks or exit the loop
        // }

        if (age>10)
        {
            continue;   // if codition becomes true then it skips the below code and iterate the next loop
        }
        /*This code will be skips*/
        printf("We have not come across any continue statement\n");
        printf("We have not come across any continue statement\n");
        printf("We have not come across any continue statement\n");
        printf("We have not come across any continue statement\n");
        printf("We have not come across any continue statement\n");
        printf("Harry is a good boy\n");
        /*This code will be skips*/
        
    }

    return 0;
}