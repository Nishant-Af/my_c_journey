#include <stdio.h>
#include <stdlib.h>

int main(){

  int* ptr;
  ptr = (int*) malloc(sizeof(int));

  if (ptr == NULL)
  {
    printf("Memmory Allocation FAiles.\n");
    return 1;
  }

  printf("VAlue Stored in Allocated Memmory : %d\n", *ptr);

  // Assign a Value to  Allocated Memmory 
  *ptr = 10;
  printf("Value Stored in Allocated Memmoey : %d\n", *ptr);

  // free the allocated Memmory
  free(ptr);

 // Now ptr is a danging pointer because it still hold the address of the previously allocated memmory // but that memmory has been freed
 
  printf("Trying To Acess free Memory : %d\n", *ptr); // this will load to be undefined

  return 0;
}