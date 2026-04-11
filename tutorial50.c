#include <stdio.h>
#include <stdlib.h>

int main()
{

    int len, i = 0;
    char *ptr;
    
    while (i < 3)
    {
        printf("Enter length of Your Employe ID : ");
        scanf("%d", &len);
        ptr = (char *)malloc((len + 1) * sizeof(char));
        printf("Employe %d: Enter YOur eID : ", i + 1);
        scanf("%s", ptr);

        printf("Employe Id for Employe %d is : %s \n", i + 1, ptr);

        free(ptr);
        i += 1;
    }

    return 0;
}