#include <stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char n[20];
    printf("enter the string");
    scanf("%s",&n);
    l=strlen(n);
    for(i=l-i;i>=0;i--)
    {
    printf(" %c",n[i]);
    }
    
}
