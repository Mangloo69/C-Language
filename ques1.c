#include <stdio.h>

// 1) take a string with multiple words and display how many spaces are present in the string

int main()
{
    char str[100];
    int i;
    int space = 0;
    printf("Enter a string\n");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            space++;
        }
    }

    printf("The number of spaces in a string : %d\n", space);
    return 0;
}