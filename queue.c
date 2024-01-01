#include <stdio.h>
#define n 5
int arr[n], f = -1, r = -1, b;

int display()
{
    if(r!=-1)
    {
    for (int i = f; i <= r; i++)
    {
        printf("%d \n", arr[i]);
    }
    }
    else{

    }
}
int insertend(int a)
{

    if (r == b )
       
    {

        printf("full....\n");
    }

    if (f == -1 && r == -1)
    {
        f = 1;
        r = 0;
         arr[r] = a;
    }
    r++;
    arr[r] = a;
}
int deletefirst()
{
    int a=0;

    if(f==-1 && r ==-1)
    {
        printf("empty...\n");
    }
    else if (f==r && f!=-1)
    {
        f=-1;
        r=-1;
    }
    else if(f>-1 && f<r)
    {
        f++;
    }
   
}
int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);

    deletefirst();
    deletefirst();
    deletefirst();

    
    display();
}