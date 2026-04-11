#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    int *ptrarra = arr;

    printf("The Value at Position of 3 of array is %d\n", arr[3]);
    printf("The Address of the first element of array is %d\n", &arr[0]);
    printf("The Address of the first element of array is %d\n", &arr);
    printf("The Address of the first element of array is %d\n", &arr[1]);
    printf("The Address of the first element of array is %d\n", (arr + 1));
    ptrarra++; //this statement is true;
    // arr++ this statement is false 

    printf("The value at address of the first element of the array is %d\n ", arr[0]);
    printf("The value at address of the first element of the array is %d\n ", arr);
    printf("The value at address of the first element of the array is %d\n ", *(arr));
    printf("The value at address of the second element of the array is %d\n", arr[1]);
    printf("The value at address of the second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of the second element of the array is %d\n", *(arr + 1));
    // system("cls");

    for (int i = 0; i <= 6; i++)
    {
        printf("%d\n", *(&arr[i]));
    }
    
    return 0;
}