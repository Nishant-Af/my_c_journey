#include <stdio.h>

int main(){

    //typedef is used to give alternate names for long or big datatypes to name it shorter  
    // typedef <Previous_name> <alias_name> 
    typedef unsigned long ul;
    ul l1,l2,l3;

    typedef struct Students_in_School
    {
        int id;
        char name[50];
        int marks;

    }std;
    
    std s1, s2;

    s1.id = 1;
    s2.id = 2;
    
    printf("The ID of s1 is : %d\n", s1.id);
    printf("The ID of s2 is : %d\n", s2.id);

    typedef int* intptr;

    intptr a,b;
    int c = 89;
    a = &c;
    b = &c;

    return 0;
}