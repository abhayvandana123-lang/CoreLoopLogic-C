#include<stdio.h>
#include<stdlib.h>
int adj(int n)
{
	int digit;int last;int first;int result;int count =0;
	for(;n>0;n=n/10)
	{
		digit=n%100;
		last=digit%10;
		first=digit/10;
		result=abs(first-last);
		count=count+result;
		
	}
	return count;
	
}
int main()
{
	int n;int final;
	scanf("%d",&n);
	final=adj(n);
	printf("%d",final);
	  
	  
	  return 0;
	  
}
