#include <stdio.h>
//    b) write a function to return nth fibonoci number

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("F(%d) = %d\n", n, fib(n));
    return 0;
}
