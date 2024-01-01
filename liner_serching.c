#include<stdio.h>
 
 int main ()
{
    int v;
    printf("Enter value :- ");
    scanf("%d",&v);
    
    int a[10] = {1,2,3,4,5,6,7,8,9,10},n=0;

     for(int i = 0; i < 10; i++)
    {
    if(a[i]==v)
    {
        n++;
    }
    }
     if(n>0)
    {
        printf("yes it is present");
        
    }
    else
    {
        printf("no it is not present");
    }
}