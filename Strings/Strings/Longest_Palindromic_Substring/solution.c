#include<stdio.h>
int main()
{
	char str1[100];int i;int j;int flag;int len1=0;int end;
	scanf("%s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
		len1++;
	}
	end =len1-1;
	for(;end>=0;end--)
	{
		flag=0;
		for(i=0,j=end;j>i;i++,j--)
		{
			if(str1[i]!=str1[j])
			{
				flag=1;
				break;
			}
		}
			if(flag==0)
		{
			break;
		}
	}
	for(i=0;i<=end;i++)
	{
		printf("%c",str1[i]);
	}
}
