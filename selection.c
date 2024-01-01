#include <stdio.h>

int a[10] = {2,35,9,23,56,76,8,75,12,6};

int main()
{
    int i, s, m = 0;

    printf("2 \t35 \t9 \t23 \t56 \t76 \t8 \t75 \t12 \t6 \n \n");

    for (i = 0; i < 10; i++)
    {

        a[i] % 50;

        for (s = 0; s < 9; s++)
        {
            if (a[s] > a[i])
            {
            
                m = a[i];
                a[i] = a[s];
                a[s] = m;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d \t", a[i]);
    }
  return 0;
}