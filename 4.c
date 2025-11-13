#include <stdio.h>
int main()
{

    int a = 20, b = 30;
    int *c, *d;
    c = &a;
    d = &b;
    int min = *c - *d;
    printf("%d", min);
    return 0;
}