#include <stdio.h>
#include <string.h>

void prase(char string[]){

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '>')
        {
            for (int j = i+2; i <= (strlen(string) - i); j++)
            {
               printf("%c", string[j]);
            }
            
        }
            
        }
    
    
}

int main(){

    char html[] = "<h1> This is a heading </h1>";
    printf("%s", html);
    prase(html);
    
    return 0;
}

/*
Input:
<h1> This is a heading </h1>
Output:
This is haeading2
Input:
<span> This is haeading2 </span>
Output:
This is haeading2

*/