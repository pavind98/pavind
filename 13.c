#include<stdio.h>
#include<math.h>
int main()
{
int p,q,r,s;
printf("enter the values");
scanf("%d",&p);
q=p%10;
r=p/10;

s=(q*q)+(r*r);
printf("%d",s);
return 0;
}
