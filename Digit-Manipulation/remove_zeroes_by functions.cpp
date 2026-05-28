#include<stdio.h>
int rem(int n )
{
	int digit;int count =0;
	for(n;n>0;n=n/10)
	{
		digit=n%10;
		if(digit>0)
		{
			count=count*10+digit;
		}
	}
	int result;int last=0;
		for(;count>0;count=count/10)
		{
		result=count%10;
		last=last*10+result;
	}
	
	return last;
	
}
int main()
{
	int n;int final;
	scanf("%d",&n);
	final=rem(n);
	printf("%d",final);
	
}
