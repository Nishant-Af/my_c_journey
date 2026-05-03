#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Random_number(){
    srand(time(NULL));
    int randnum = rand() %100;
    return randnum;
}

int main(){

    while (1)
    {
        int guess_random = Random_number();
        int guess;
        printf("Guess a No b/w 1 - 100 : ");
        scanf("%d", &guess);
        if (guess == guess_random)
        {
            printf("You Guessed the Number \n");
            break;
        }
        else{
            printf("You failed \n");
        }
        
        printf("Computer Guess %d\n", guess_random);
        printf("Your Guess %d\n", guess);
    }

    return 0;
}