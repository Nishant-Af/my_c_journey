#include <stdio.h> 

int main(){
    
    int a,b; // Declaratio of a variableS
    printf("Enter a Number : "); // variables initialized by user 
    scanf("%d",&a);  // scanf function from header file used to take input from user

    printf("Enter a Number : ");
    scanf("%d",&b);

    printf("The Sum is : %d",a+b);
    
    return 0;
}