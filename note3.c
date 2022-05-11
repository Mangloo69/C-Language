/*
to print the format

    ---
    ABC
    ---
    DEF
    ---

*/

#include <stdio.h>

void f1(int no)
{
    int i;
    for (i = 0; i < no; i++)
    {
        printf("---\n");
    }
}

int main()
{
    f1(2);
    printf("AB\n");
    f1(3);
    printf("CB\n");
    f1(2);
    return 0;
}
