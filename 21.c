#include<stdio.h>
int main()
{
    int a[2],b[2],c[2],n=0,i;
for(i=0;i<2;i++)
{
    scanf("%d",&a[i]);
    
}
for(i=0;i<2;i++)
{
    scanf("%d",&b[i]);
    
}

for(i=0;i<2;i++)
{
    scanf("%d",&c[i]);
    
}
for(i=0;i<2;i++)
{
if(a[0]==b[0] && b[0]==c[0])
n=1;
}
if(n=1)
{
    print(yes);

}
else
{
    print(no);
}
return 0;
}
