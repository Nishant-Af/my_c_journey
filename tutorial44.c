#include <stdio.h>
#include <string.h>

int main(){
    typedef struct Agency
    {
        char name[20];
        char liscance[12];
        char Route[30];
        char Kms[10];
    } Ag;

    int no;
    printf("Enter n number to get details n no of Drivers : ");
    scanf("%d", &no);
    getchar();

    
    char DriverName[20];
    for (int i = 0; i < no; i++)
    {
        gets(DriverName);
    }    

    return 0;
}