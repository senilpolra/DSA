#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the value of a :");
    scanf("%d",&a);

    printf("Enter the value of b :");
    scanf("%d",&b);

    printf("Enter the value of c :");
    scanf("%d",&c);

    a>b && a>c?printf("a is big") :b>c?printf("b is big ") : printf("c is big");
    
    return 0;
}