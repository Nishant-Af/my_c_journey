#include <stdio.h>

int main()
{

    int num, n;
    printf("Enter 0 for tringular star Pattern and 1 for reversed Tringular Star Pattern : ");
    scanf("%d", &num);

    printf("Enter no of * You Want : ");
    scanf("%d", &n);

    if (num == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c ", '*');
            }
            printf("\n");
        }
    }
    else if (num == 1)
    {

       for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", '*');
        }
        printf("\n");
    }
    }

    else
    {
        printf("Invalid Input");
    }

    return 0;
}