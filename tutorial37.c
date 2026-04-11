#include <stdio.h>
#include <string.h>

// use of structures in c;

struct Students
{
    int id;
    int marks;
    char fav_char;
    char name[55];
} Harry, Nishant, Riya;

struct Students Harry, Nishant, Riya; //this is the same like we wrote above
// therse are global variables and we can acces it anywhere in the program
void print()
{
    
    printf("The  Marks of Nishant is : %d\n", Nishant.marks);
    printf("The  Marks of Harry is : %d\n", Harry.marks);
    printf("The  Marks of Riya is : %d\n", Riya.marks);
}

int main()
{
    
    // here this is a local variable and we can use this in our main function
    // struct Students Harry, Nishant, Riya; 
    
    Nishant.id = 1;
    Nishant.marks = 100;
    Nishant.fav_char = 'N';
    Harry.id = 2;
    Harry.marks = 99;
    Harry.fav_char = 'H';
    Riya.id = 3;
    Riya.marks = 93;
    Riya.fav_char = 'R';
    // Nishant.name = "Real Nishant";  // it's wrong

    strcpy(Nishant.name, "Real Nishant"); // it's correct
    strcpy(Harry.name, "Harry potter is The Harry potter ");
    strcpy(Riya.name, "Riya Cyber Hacker");

    Nishant.fav_char = 'Z';
    Harry.fav_char = 'Y';
    Riya.fav_char = 'X';

    printf("The Name of Harry is  : %s\n", Harry.name);
    printf("The Name of Riya is  : %s\n", Riya.name);
    printf("The Name of Nishant is  : %s\n", Nishant.name);

    print();

    return 0;
}