#include<stdio.h>

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8};
    
        for(int i = 0; i < 8; i++) //6 deleted
    {
            if(i < 4)
            {
                a[i] = a[i];
            }
        

        else if(i >= 5)
        {
            a[i] = a[i + 1];
        }
    }
        
        for(int i = 0; i < 7; i++)
        {
            printf("Arry :%d\n",a[i]);
        }

    return 0;

}

