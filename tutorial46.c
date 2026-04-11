#include <stdio.h>
#include <string.h>

typedef struct DriverAgency
{
    
    char name[20];
    char liscance[12];
    char Route[30];
    char Kms[10];
} Ag;

int main(){

    int no;
    printf("Enter no to get details n no of inputs : ");
    scanf("%d", &no);
    char myarray[no * 4];

    return 0;
}