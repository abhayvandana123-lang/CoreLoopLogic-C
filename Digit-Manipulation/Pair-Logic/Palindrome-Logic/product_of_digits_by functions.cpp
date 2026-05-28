#include<stdio.h>
int pro(int n)
{
	int digit;int count =1;
	for(;n>0;n=n/10)
	{
		digit=n%10;
		if(digit%2!=0)
		{
			count =count*digit;
			
		}
	}
	return count ;
	
}
int main ()
{
	int n;int final;
	scanf("%d",&n);
	final=pro(n);
	printf("%d",final);
	
}
