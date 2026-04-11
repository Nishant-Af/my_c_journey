#include <stdio.h>
#include <string.h>

union Students
{
    int id;
    int marks;
    char name[50];
} s1;

int main()
{

    strcpy(s1.name, "Nishant");
    // s1.marks = 100;
    // s1.id = 55;

    // printf("%d\n", s1.id);
    // printf("%d\n", s1.marks);
    printf("%s\n", s1.name);

    return 0;
}