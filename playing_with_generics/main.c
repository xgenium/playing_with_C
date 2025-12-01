#include <stdio.h>

#define foo(x) _Generic(x, \
                int: fooi(x), \
                float: foof(x))

void fooi(int x)
{
    printf("int: %d\n", x);
}

void foof(float x)
{
    printf("float: %.2f\n", x);
}

int main()
{
    foo(12);
    foo(12.25f);
    return 0;
}
