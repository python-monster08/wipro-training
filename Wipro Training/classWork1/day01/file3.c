#include <stdio.h>

int main()
{
    int a = 10, b=20;
    int c;

    c = ++a;
    b = a++;
    printf("\n%d %d %d", a++, ++b, c++);
    printf("\n%d %d %d", a++, b--, --c);
    printf("\n%d %d %d", a, b, c);
    printf("\n");
}