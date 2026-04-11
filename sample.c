#include <stdio.h>

int main(){

  
    while (1)
    {
        int guess;
        printf("Guess a No b/w 1 - 100 : ");
        scanf("%d", &guess);
        if (guess == 69)
        {
            printf("You Guessed the Number \n");
            break;
        }
        else{
            printf("You failed \n");
        }
        
    }
    


    return 0;
}