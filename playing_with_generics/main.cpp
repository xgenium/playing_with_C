#include <stdio.h>

void foo(int x)
{
    printf("int: %d\n", x);
}

void foo(float x)
{
    printf("float: %.2f\n", x);
}

int main()
{
    foo(12);
    foo(12.222f);
    return 0;
}
