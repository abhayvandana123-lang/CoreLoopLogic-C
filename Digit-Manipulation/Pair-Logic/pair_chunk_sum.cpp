#include<stdio.h>
int main()
{
	int n;int digit;int count=0;
	scanf("%d",&n);
	for(;n>0;n=n/10)
	{
		digit=n%10;
		count=count*10+digit;
		
	}
	int pair; int final=0;
	for(;count>0;count=count/100)
	{
		pair=count%100;
		final=final+pair;
	}
	printf("%d",final);
	
	return 0;
	
}
