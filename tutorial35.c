#include <stdio.h>
#include <string.h>

int main(){

    char name1[10];
    char name2[10];
    char str3[32];

    printf("Enter Your Name : ");
    gets(name1);
    // fgets(name1, sizeof(name1), stdin); // Safe: reads up to 49 chars + \0
    printf("Enter Your friends Name : ");
    gets(name2);

    puts(name1);
    puts(name2);
   
    printf("The Length of %s is : %d\n", name1, strlen(name1));
    printf("The Length of %s is : %d\n", name2, strlen(name2));
    puts(strrev(name1));
    puts(strrev(name2));
    (strrev(name1));
    (strrev(name2));
    
    printf("%s is friend of %s\n", name1, name2);
    printf("The strcmp for s1,s2 returned : %d\n",strcmp(name1, name2));

    strcpy(str3,name1);

    printf("The Copied String from name1 is : %s", str3);
    
    printf("\n");
    printf("The Concatination is : ");
    puts(strcat(name1,name2));
    puts(name1);
    printf("%s\n", name1);
    puts(name2);
    
   return 0;
}