
/*fibonaci series
7) 
    a) write a function to display fibonoci series upto nth position

*/
#include <stdio.h>

void fibo(int n)
{
    int a = 0, b = 1, f;
    printf("%d ", b);

    for (int i = 0; i < n - 1; i++)
    {
        f = a + b;
        a = b;
        b = f;
        printf("%d ", f);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    fibo(n);
    return 0;
}
