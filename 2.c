#include <stdio.h>
int main()
{
    int n,i,fact=0;
    printf("enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fact=fact*(n-1);
    }
    printf("the factorial is",n);
    return 0;
    }

