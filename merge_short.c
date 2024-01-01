#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int l,int mid,int h)
{
    int b[10];
    int i = l, j = mid +1, k = l;

    while (i <= mid && j <= h)
    {
        if(arr[i]< arr[j])
        b[k++] = arr[i++];

        else
        b[k++] = arr[j++];
    }

    while (i <= mid)
    
        b[k++] = arr[i++];

    while (j <= h)
    
        b[k++] = arr[j++];

    for(i = l; i <= h; i++)
    
        arr[i] = b [i];       
}

int mergesort(int arr[], int l,int h)
{
    int mid;

    if(l<h)
    {
        mid = (l + h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid + 1, h);
        merge(arr,l,mid,h);
    }

}

int main()
{
    int a[10] = {23,27,56,61,3,21,43,98,91,12},n = 10,i;
    for(i = 0; i < n; i++)
        a[i] = rand()%99 + 1;
    
    printf("befor : \n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

        mergesort(a,0,n-1);

    printf("\n after \n");

    for(i = 0; i < n; i++)
        printf("%d ",a[i]);
}