#include <stdio.h>
#include <stdlib.h>

int danglingfunction(){
    int a, b, sum;
    a = 34;
    b =36;
    sum = a + b;
}

int main(){

    // Case 1: De Allocation of memmory block 
    int* ptr = (int *) malloc(7 * sizeof(int));
    ptr[0] = 32;
    ptr[1] = 64;
    ptr[2] = 36;
    ptr[3] = 5;
    
    free(ptr);  // ptr is now a dangling pointer
    // Case 2: Function returning local VAriable Address 

    int* dangptr = danglingfunction(); // ptr is now a dangling pointer

    // Case 3: If a Variable goes out of scope
    int * danglingptr3;
    {
        int a = 32;
        danglingptr3 = &a;
    }
    // Here A Variable goes out of scope which means danglingptr3 is pointing to a location which is freed and hence danglingptr3 is now a dangling pointer 

    return 0;
}