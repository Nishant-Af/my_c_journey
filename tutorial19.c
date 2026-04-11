#include <stdio.h>
int sum(int a, int b); // this is the decleartion of the function now we can write logic in the function below the our main function we can't call the function if we write down the function below our main function and wihtout declaring it 


// function with argument and without return value
void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}

// function with no argument but with return value
int takenumber(){
    int i;
    printf("\nEnter a Number : ");
    scanf("%d", &i);
    return i;
}

// function without argument and without return value
void greetings(){
    printf("Hello Sir !! \n Jarvis back here !!\n ");
}

int main(){
    
    /* Calling The Function */
    greetings();
    int c = sum(3,4);         
    printstar(7);    
    int i = takenumber();
    printf("The Number You enterd in function is : %d",i);
    return 0;    
}

// function with argument and return value
int sum(int a, int b){
    return a + b;
}