#include<stdio.h>
void main()
{
    int s=0,i,x,h=0,a[5],b[5],c[15],e;

    for(i=0;i<5;i++)
    {
        printf("Enter %d A value :",i+1);
        scanf("%d",&a[i]);
        h++;
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("Enter %d B value :",i+1);
        scanf("%d",&b[i]);
        s++;
    }

    x=0;
    
    for(i=0;i<h;i++)
    {
        c[i]=a[i];
        x++;
    }
     
    e=0;
    for(i=x;e<s;i++)
    {
        c[i]=b[e];
        e++;
        x++;
    }

    printf("\n");
    
    for(i=0;i<x;i++)
    {
        printf("%d ",c[i]);
    }

}