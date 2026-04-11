#include <stdio.h>

void ArrayRev(int *array)
{

    int temp[7];

    for (int t = 0; t < 7; t++)
    {
        temp[t] = array[t];
    }

    for (int i = 0; i < 4; i++)
    {
        (array[i]) = temp[7 - i - 1];
        printf("%d ", array[i]);
    }

    for (int j = 2; j >= 0; j--)
    {
        array[j] = temp[j];
        printf("%d ", array[j]);
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    ArrayRev(arr);
    

    return 0;
}