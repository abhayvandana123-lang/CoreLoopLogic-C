#include<stdio.h>
int main()
{
	int n;int digit;int count=0;
	scanf("%d",&n);
	for(n;n>0;n=n/10)
	{
		digit=n%10;
		count=count*10+digit;
	}
	int final; int req=0;
	for(;count>0;count=count/10)
	{
		final=count%10;
		if(final==2||final==4||final==6||final==8)
		{req=req*10+final;
		}
	}
	printf("%d",req);
	return 0;
}
