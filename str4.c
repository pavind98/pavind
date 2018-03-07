#include<stdio.h>
#include<string.h>
 
int main()
{
   char name[30];
   int i;
   scanf("%s",name);
   i=strlen(name);
   name[i]='.';
   printf("%s",name);
 
   return 0;
}
