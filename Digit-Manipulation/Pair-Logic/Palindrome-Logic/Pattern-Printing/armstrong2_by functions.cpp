#include<stdio.h>
#include<math.h>
int arm(int n)
{
	int digit;int result;int count =0;
	for(;n>0;n=n/10)
	{
		digit=n%10;
		result=pow(digit,3);
		count=count+result;
		
	}
	return count;
	
}
int main()
{
	int n;int final;
	scanf("%d",&n);
	int k=n;
	final=arm(n);
	if(final==k)
	{
		printf("ARMSTRONG");
		
	}
	else
	{
		printf("NOT ARMSTRONG");
	}
	return 0;
	
}
