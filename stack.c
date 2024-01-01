#include <stdio.h>
#define n 5
int a[n], top = -1;

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d", a[i]);
    }
}

int insertend(int val)
{
    if (top >= n - 1)
    {
        printf("stack is full....\n");
    }
    else
    {
        top++;
        a[top] = val;
    }
}
int pop()
{
    if (top <= -1)
    {
        printf("stack is empty....\n");
    }
    else
    {
        top--;
        a[top];
    }
    
}
int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);


    // pop();
    // pop();
    // pop();
    // pop();
    // pop();
    // pop();

    display();
}