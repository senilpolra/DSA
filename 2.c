#include<stdio.h>

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8};
    
        for(int i = 7; i >= 0; i--) 
    {
            if(i >= 2)
            {
                a[i + 1] =a[i];
            }
        
    }
        a[2] =6;
        
        
        for(int i = 0; i <= 7; i++)
        {
            printf("Arry :%d\n",a[i]);
        }

    return 0;

}

