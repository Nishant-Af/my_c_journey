#include <stdio.h>

void ArrayRev(int *array, int sz)
{

    int temp[sz];

    for (int t = 0; t < sz; t++)
    {
        temp[t] = array[t];
    }

    for (int i = 0; i < sz / 2 + 1; i++)
    {
        (array[i]) = temp[sz - i - 1];
        printf("%d ", array[i]);
    }

    for (int j = sz / 2 - 1; j >= 0; j--)
    {
        array[j] = temp[j];
        printf("%d ", array[j]);
    }
}

int main()
{

    int size, value;
    printf("Enter how Many Size You Want in Your Array : ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter Your Array Value at %d : ", i);
        scanf("%d", &value);
        arr[i] = value;
    }

    ArrayRev(arr, size);
    return 0;
}