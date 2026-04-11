#include <stdio.h>
#include <stdlib.h>

int main(){

    // Use of malloc
    // it initialzed all the value with garbage value
    int* ptr;
    ptr = (int*) malloc(3*sizeof(int));
    
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Value of Array at %d ",i);
        scanf("%d", &ptr[i]);
    }
    
    // Use of Calloc
    // it initialzed all the value with 0

    ptr = (int*) calloc(5,sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Value of Array at %d ",i);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // use of realloc
    // used to reintialllized the memory 

    ptr = (int*) realloc(ptr, 8*sizeof(int));

    for (int i = 0; i < 8; i++)
    {
        printf("Enter Value of Array at %d ",i);
        scanf("%d", &ptr[i]);
    }
    free(ptr);
    ptr = NULL;

    return 0;
}