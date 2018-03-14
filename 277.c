#include <stdio.h>
void main()
{
	char str[10];
	int i;
	printf("enter the string");
	scanf("%s",str);
	for(i=0;i<=10;i++)
	{
	if((str[i]>='a')&&(str[i]<='z'))
	{
		str[i]=str[i]-32;
	}
	else
	{
		str[i]=str[i]+32;
	}
	}
	printf("%s",str);
	

}
