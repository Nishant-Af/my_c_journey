#include <stdio.h>

int main()
{
    int x;           
    int i, j;    // this expression 2 is special we can intialize, declare and increment and can do all operations of expresioon 1 and expression 2 the loop will iterate until the last condition becomes false and others conditions treated as statement 
    for ( i = 0; x = 0, i < 5, j < 3 /*j < 3 is conndition and others are treated as statement*/; i++,j++)
    {
        printf("%d %d\n",i,j);
        x++;

    }

    // all expressions expression 1, expression 2 and expression 3 are optional 
    

    return 0;
}

