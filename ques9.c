/*
9)      ****
        ***
        **
        *
        ABC
        ###
        ##
        #
        DEF
        =
        ==
        ===
        pqr
        **
        *

*/

#include <stdio.h>

void f1(int n, char b)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i; j >= 0; j--)
        {
            printf("%c", b);
        }
        printf("\n");
    }
}

void f2(int n, char b)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = n; j > i; j--)
        {
            printf("%c", b);
        }
        printf("\n");
    }
}
int main()
{
    f2(4, '*');
    printf("ABC\n");
    f2(3, '#');
    printf("DEF\n");
    f1(3, '=');
    printf("pqr\n");
    f2(2, '*');
    return 0;
}
