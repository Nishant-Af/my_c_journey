#include <stdio.h>

int main()
{

    printf("Lets Learn Poingters in C \n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("%p\n", ptr2);
    /*
    ptra == &a; is same
    *ptra == dereference of stored value of a 
    printf("The Address of pointer to a is %p\n", &ptra);
    printf("The Address of a is %p\n", &a);
    printf("The Address of a stored in ptra %p\n", ptra);
    printf("The Value of a is %d\n",a);
    printf("The Value of a is %d\n",*ptra);
    printf("The address of ptr2 is %p", ptr2);
    */

    printf("%d\n",a);
    printf("%d\n",*ptra);
    printf("%p\n",&a);
    printf("%p\n",&ptra);
    printf("%p\n",ptra);
    printf("%p\n",&*ptra);

    return 0;
}