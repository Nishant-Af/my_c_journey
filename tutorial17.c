#include <stdio.h>
// goto label

int main()
{

    // label:
    //     printf("We are inside goto lable");
    //     goto end;
    //     printf("Hello World\n");
    // goto label;
    // end:
    //     printf("We exit end goto label ");

    /*
    Also Called jump statement in c 
    used to transfer program to a predefined label
    it's use is avoided since it cause confusion for fellow programers in understanding the code 
    goto statement is preferable when we need to break multiple loops using a single statement at same time 
    */

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter 0 to Exit the loop : ");
            scanf("%d",&num);
            
            if (num == 0)
            {
                // break; it helps to exit this loop not from whole loop
                goto end;   // it helps us to exit whole loop
            }
            
        }
    }
    end:

    return 0;
}