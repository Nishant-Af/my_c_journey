/*
#include <stdio.h>
// function call by reference 

void changeValue(int *address){

    *address = 9013;
    return ; // it return nothings 

}

int main(){

    int a = 34;

    printf("The Value of a is : %d\n", a);
    changeValue(&a);
    printf("The Value of a is : %d\n", a);

    return 0;
}
*/

// Quick Quiz 

#include <stdio.h>

void Add_Sub(int* x, int* y){

    int temp;
    temp = *x + *y;
    *y = *x - *y;
    *x = temp;
}

int main(){

    int a = 4, b = 3; 
    printf("The Value of a : %d and b : %d before function\n",a,b);
    Add_Sub(&a,&b);
    printf("The Value of a : %d and b : %d after function\n",a,b);
    

    return 0;
}


