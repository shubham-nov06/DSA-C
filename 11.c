#include <stdio.h>
int main()
{
    int a[10] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 27};
    int pass, hold;
    printf("data items in original order ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", a[i]);
    }
    for (pass = 1; pass < 10; pass++)
    {
        for (int i = 0; i < 10 - 1; ++i)
        {
            if (a[i] > a[i + 1])
            {
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }
    printf("Items in ascending form = ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", a[i]);
    }
}