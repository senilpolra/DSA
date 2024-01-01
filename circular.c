#include <stdio.h>
#define n 5

int arr[n], f = -1, r = -1;

int display()
{
    int i = f;
    do
    {
        printf("%d ", arr[i]);
        i = (i + 1) % n;
    } while (i != (r + 1) % n);
}
int insertend(int val)
{
    if (r < 0)
    {
        f = r = 0;
        arr[r] = val;
    }
    else if ((r + 1) % n == f)
    {
        printf("full");
    }
    else
    {
        r = (r + 1) % n;
        arr[r] = val;
    }
}

int firstdelete()
{
    if (f < 0)
    {
        printf("full");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f = (f + 1) % n;
    }
}
int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);

    firstdelete();
    insertend(60);
    //    firstdelete();
    //    firstdelete();

    display();
}
