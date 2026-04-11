#include <stdio.h>

int func1(int array[])
{

    for (int i = 0; i < 4; i++)
    {
        printf("The Value of array at %d is %d\n", i, array[i]);
    }
    array[0] = 384;

    return 0;
}

int func2(int *ptr)
{

    for (int i = 0; i < 4; i++)
    {
        // printf("The Value of array at %d is %d\n" , i, ptr[i]);
        printf("The Value of array at %d is %d\n", i, *(ptr + i));
    }

    return 0;
}

void func3(int array[][2])
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The Value at %d and %d is %d\n",i,j, array[i][j]);
        }
    }
}

int main()
{

    // int arr[] = {13,23,3,4};
    int arr[][2] = {{13, 23}, {3, 4}};

    /*
    printf("The Value of arr at index 0 is %d\n", arr[0]);
    func1(arr);
    printf("The Value of arr at index 0 is %d\n", arr[0]);
*/
    // func2(arr);

    func3(arr);

    return 0;
}