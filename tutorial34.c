#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void PrintStr(char str[]){

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    // int i = 0;
    // while (str[i] != '\0')
    // {
    //     printf("%c", str[i]);
    //     i++;
    // }
    // // printf("\n")    ;

}

int main(){

    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[6] = "harry";
    char str[5];
    gets(str);      //--> getstring we can also use scanf but scanf can't campture Whitespaces; gets used to get input for charaters from user
    PrintStr(str);
    printf("%s\n", str);
    puts(str);     //--> putsring it is used to print string also we can use printf for printing 

    system("cls");
    return 0;
}