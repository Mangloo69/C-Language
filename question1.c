/*
to print the format

    ---
    AB
    ***
    ***
    ***
    CD
    ###
    ###


*/

#include <stdio.h>

void f1(int no, char b)
{
    int i;
    for (i = 0; i < no; i++)
    {
        printf("%c%c%c\n", b, b, b);
    }
}

int main()
{
    f1(1, '-');
    printf("AB\n");
    f1(3, '*');
    printf("CB\n");
    f1(2, '#');
    return 0;
}
