#include <stdio.h>

int main()
{
    int i,a;
    printf("enter the number");
    scanf("%d",&a);
    while(a!=0)
    {
        i=a%10;
        a=a/10;
        printf("%d",a);
    }
    return 0;
    }
