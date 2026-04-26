#include <stdio.h>
#include <stdlib.h>
#define safe_free(x); do{free(x); x = NULL;}while(0);

int main(){

    int* ptr = (int *) malloc(sizeof(int));
    ptr[0] = 55;

    safe_free(ptr);
    printf("The Address of ptr is %p\n", ptr);

    return 0;
}