#include <stdio.h>
#define n 5
int a[5], top = -1,z[5];

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int insertend(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is full.....\n");
    }
    else
    {
        top++;
        a[top] = val;
    }
}


int deleteend()
{
    if (top == -1)
    {
        printf("Stack is empty.......\n");
    }
    else
    {
        top--;
    }
}

int insertfirst(int val)
{
    int d,l;
    if(top==-1)
    {
        top++;
        a[top]=val;
    }
    else if(top>=4)
    {
        printf("\n Stack is  full");
    }
    else{
        top++;
        l=top-1;

        for(int i = top; i > 0; i--)
        {
            a[i]=a[l];
            l--;
        }
        a[0]=val;
    }
    
}


int deletefirst()
{
    int v=1;

    if(top == -1)
    {
        printf("\n Stack is empty");
    }
    
    else{
       for(int i = 0; i <= top; i++)
       {
            a[i]=a[v];
            v++;
       }
    }
    
    top--;
}

int main()
{
    
    insertfirst(10);
    insertfirst(20);
    insertfirst(30);
    insertfirst(40);
    
    
    
    display(); 
    return 0;
}