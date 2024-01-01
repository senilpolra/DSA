#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 2, 1, 5, 6, 7, 4, 6}, i, k, j, mid, min, max, x;

    for (i = 0; i < 9; i++)
    {
        for (i = 0; i < 9; i++)
        {
            if (a[i] > a[j])
            {
                a[j] = a[i] + a[j]; // b=a
                a[i] = a[j] + a[i]; // a=b-a
                a[j] = a[j] + a[i]; // b=b-a
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }
    min = a[0];
    max = a[9];
    mid = min+(max - min) / 2;

    if (x == mid)
    {
        printf("6 is present in an array");
    }
    else if (x > mid)
    {
    }
    else if (x < mid)
    {
    }

    return 0;
}
