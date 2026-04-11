#include <stdio.h>
// DO while loop 
int main(){

    int num, index = 0;
    printf("Enter a Number : ");
    scanf("%d",&num);

    do
    {
        printf("%d\n",index + 1); //index+1 is an expression that evaluated for printing index. it can't modify the value of index
        index += 1; // that statement modify the value of index
    } while (index<num);
    

    return 0;
}