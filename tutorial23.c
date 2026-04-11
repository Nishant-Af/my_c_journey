#include <stdio.h>

int main()
{
    /*
        int marks[4];
        marks[0] = 34;
        printf("The marks of Student 1 is %d\n", marks[0]);
        marks[0] = 4;  // so arrays are mutable and fast
        marks[1] = 24;
        marks[2] = 34;
        marks[3] = 44;
        printf("The marks of Student 1 is %d\n", marks[0]);



    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d elelemnt of the array\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d elelemnt of the array%d\n", i, marks[i]);
    }
        */

    int matrix[2][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8}};

    // taking input for 2 - dimensional array
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &matrix[i]);
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // taking input for 2 - dimensional array but it's a different method
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}