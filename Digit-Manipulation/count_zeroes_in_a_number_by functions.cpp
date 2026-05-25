#include<stdio.h>
int count(int n)
{
	int digit;int count=0;
	if(n==0)
	{
		return 1;
		
	}
	
	for(;n>0;n=n/10)
	{
		digit=n%10;
		if(digit==0)
		{
			count++;
			
		}
	}
	return count;
	
}
int main()
{
	int n;int final;
	scanf("%d",&n);
	final=count(n);
	printf("%d",final);
	
}
