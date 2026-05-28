#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;int digit;int count=0;
	scanf("%d",&n);
	for(;n>0;n=n/10)
	{
		digit=n%10;
		count= count*10+digit;
		
	}
	int pair;int last;int first;int result; int req;int final = 0;
	for(;count>9;count=count/10)
	{
		pair=count%100;
		last=pair%10;
		first=pair/10;
		result=first-last;
		req=abs(result);
		final=final+req;
		
		
		
	}
	printf("%d",final);
	return 0;
	
}
