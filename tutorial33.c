#include <stdio.h>

void StarPatter(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void ReverseStarPatter(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{

    int rows, type;
    printf("0: For Printing Tringular Star Patter\n1: For Printing Reverse Tringular Star Patter\n");
    printf("Enter 0 0r 1  : ");
    scanf("%d", &type);

    switch (type)
    {
    case 0:
        printf("How Many Number do You Want : ");
        scanf("%d", &rows);
        StarPatter(rows);
        break;

    case 1:
        printf("How Many Number do You Want : ");
        scanf("%d", &rows);
        ReverseStarPatter(rows);
        break;

    default:
        printf("You have Entered an Invalid Choice");
        break;
    }

    return 0;
}