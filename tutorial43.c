#include <stdio.h>
#include <string.h>

void parse(char *string)
{
    int in = 0, index = 0;
    int len = strlen(string);

    // Remove HTML tags
    for (int i = 0; i < len; i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        if (string[i] == '>')
        {
            in = 0;
            continue;
        }

        if (!in)
        {
            string[index++] = string[i];
        }
    }
    string[index] = '\0';

    // Remove leading spaces
    int start = 0;
    while (string[start] == ' ')
        start++;

    int i = 0;
    while (string[start])
        string[i++] = string[start++];

    string[i] = '\0';

    // Remove trailing spaces
    int end = strlen(string) - 1;
    while (end >= 0 && string[end] == ' ')
        string[end--] = '\0';
}

int main()
{
    char string[] = "<h1>                    This is a heading                     </h1>";
    parse(string);
    printf("The parsed String is ~~%s~~", string);
    return 0;
}