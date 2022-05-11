#include <stdio.h>

int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

int main()
{
    int a, b, sum;
    scanf("%d%d", &a, &b);
    sum = add(a, b);
    printf("%d\n", sum);
    int f = printf("abc");
    printf("\n%d\n", f);
    return 0;
}
