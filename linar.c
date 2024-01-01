#include <stdio.h>
#include<conio.h>


int search (int s, int min , int max)
{
    int mid,r=0,m=0;
    mid = min + (max - min)/2;

    if(s==mid)
    {
        return 1;
    }
    else if(s>mid)
    {
        if(m>10)
        {
            return 0;
        }
        min = mid;
        m++;
        return search(s,min,max);
    }
    else if(s<mid)
    {
        if(r>10)
        {
            return 0;
        }
        max=mid;
        r++;
        return search (s,min,max);
    }
    else{
        return 0;
    }
}

void main()
{
    int a[10],i,b,c=0,d,e,j;
    printf("Enter value in array \n");

    for(i=0;i<5;i++)
    {
        printf("Enter a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nEnter a number to search :");                            
    scanf("%d",&b);
    printf("\nLinear method :");

    for(i=0;i<10;i++)
    {
        if(a[i]==b)
        {
            printf("%d index  \n",i);
            c++;
        }
    }
    if(c==0)
    {
        printf("ERROR 404 : no match found\n");
    }
j=0;    
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        
        if(a[i]>a[j])
        {
            e=a[i];
            a[i]=a[j];
            a[j]=e;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n\n Binary method :\n\n");


    int mid, max, min;

    min=a[0];
    max=a[4];

    int result;

    result = search(b,min ,max);

        if(result==1)
        {
            printf("%d is present in array",b);
        }
        else if(result == 0)
        {
            printf("%d is not present in array",b);
        }


}
