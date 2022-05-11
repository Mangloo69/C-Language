#include <stdio.h>

/* Function: A series of statement/instructions combined together to perform a particular task.

f(x)= 8x^2 + 6 + 12x^2 + 9


int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

int main()
{
    int a, b, sum=0;
    scanf("%d%d", &a, &b);

    sum = add(a, b);
    printf("%d", sum);

    return 0;
}



//Another way to write function


int add(int , int)            (to declare that 'add' function is given somewhere)

int main()
{
    int a, b, sum=0;
    scanf("%d%d", &a, &b);

    sum = add(a, b);
    printf("%d", sum);

    return 0;
}

int add(int x, int y)           (Adding 'add' function)
{
    int z;
    z = x + y;
    return z;
}

*/




int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

int main()
{
    int a, b, sum=0;
    scanf("%d%d", &a, &b);

    sum = add(a, b);
    printf("%d\n", sum);

    return 0;
}





//Function syntax

/* <returntype> <functionname> <parameter1,parameter2,.....>
{
    ______
    ___
    ___

    return 
}
*/




