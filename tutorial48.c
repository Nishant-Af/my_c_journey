#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int length;
    char *eId;
    printf("Enter Length Of your eID");
    scanf("%d", &length);
    eId = (char*) malloc(sizeof(char));
    for (int i = 0; i < 3; i++)
    {

        printf("Enter eId for Employe %d : ", i+1);
        scanf("%s", &eId);
    }
    
    return 0;
}