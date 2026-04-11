#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GenerateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    int rock = 1, paper = 2, scissor = 3;
    int user;
    char username[20];
    printf("Enter Your Username : ");
    gets(username);
    int user_point = 0, bot_points = 0, i = 0;
    printf("...................Read INSTRUCTIONS CAREFULLY.........................\n");
    printf("Enter 1, 2, 3 According to Your Choice\n");
    printf("1 -> Rock\n2 -> Paper\n3 -> Scissor\n");

    int random = GenerateRandomNumber(4);
    while (i < 3)
    {
        printf("Enter Your Choice : ");
        scanf("%d", &user);

        for (int i = 1; i < 4; i++)
        {
            if (user == i)
            {
                printf("%s Choose %d\n", username, i);
            }
            if (random == i)
            {
                printf("%s Choose %d\n", "Computer", i);
            }
        }

        if (user == random)
        {
            user_point += 1;
            bot_points += 1;
            printf("Computer and %s Both Gets 1 Point\n", username);
        }
        else if (user == rock && random == paper)
        {
            printf("Computer Get 1 Point\n");
            bot_points += 1;
        }

        else if (user == paper && random == scissor)
        {
            printf("Computer Get 1 Point\n");
            bot_points += 1;
        }

        else if (user == scissor && random == rock)
        {
            printf("Computer Get 1 Point\n");
            bot_points += 1;
        }
        else if (user == rock && random == scissor)
        {
            printf("%s Get 1 Point\n", username);
            user_point += 1;
        }
        else if (user == paper && random == rock)
        {
            printf("%s Get 1 Point\n", username);
            user_point += 1;
        }
        else if (user == scissor && random == paper)
        {
            printf("%s Get 1 Point\n", username);
            user_point += 1;
        }
        else
        {
            printf("False\n");
        }

        i += 1;
    }

    if (user_point == bot_points)
    {
        printf("Both Are Winners !!\n ");
    }
    else if (user_point > bot_points)
    {
        printf("%s is Winner \n", username);
    }
    else if (bot_points > user_point)
    {
        printf("Computer is Winner \n");
    }

    return 0;
}