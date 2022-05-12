#include <stdio.h>

// 2) count the numbeer of words present in a string

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

    printf("The number of words in a string : %d\n", space + 1);
    return 0;
}