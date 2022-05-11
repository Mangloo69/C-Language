/*
6) write a function for finding factotial
        6--> fact(3)
*/

#include <stdio.h>
int fact(int a)
{
    int z = 1;
    for (int i = 1; i <= a; i++)
    {
        z *= i;
    }
    return z;
}

int main()
{
    int b;
    scanf("%d", &b);
    int c = fact(b);
    printf("The factorial of %d is : %d\n", b, c);
    return 0;
}