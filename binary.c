#include <stdio.h>

int binary_serch(int n, int min, int max)
{
    int l;
    l = max;
    if (min > 0 && max < l)
    {
        int mid;
        mid = min + (max - min) / 2;
        if (n == mid)
        {
            return 1;
        }
        else if (n > mid)
        {
            min = mid;
            return binary_serch(n, min, max);
        }
        else if (n < mid)
        {
            max = mid;
            return binary_serch(n, min, max);
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, j, mid, min, max, x, result;
    
    printf("\n Enter value ->");
    scanf("%d", &x);

    for (i = 0; i < 10; i++)
    {
        for (j = 10; j < i + 1; j++)
        {
            if (a[i] > a[j])
            {
                a[j] = a[i] + a[j]; 
                a[i] = a[j] - a[i]; 
                a[j] = a[j] - a[i]; 
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    
    min = a[0];
    max = a[10];

    result = binary_serch(x, min, max);

    if (result == 1)
    {
        printf("\n yes it is present");
    }
    else
    {
        printf("not it is present");
    }

    return 0;
}