#include<stdio.h>
int rev(int n)
{
	int digit;int count =0;
	for(;n>0;n=n/10)
	{
		digit=n%10;
		if (digit==0)
		{
			count=0;
		}
		else if(digit%2==0)
		{
			count=count*10+digit;
		}
	}
	return count ;
	
}
int main()
{
	int n;int final;
	scanf("%d",&n);
	final=rev(n);
	printf("%d",final);
	
}
