#include<stdio.h>
int main()
{
	char str[100];int i;int start=0;int end1=0;int end;int j;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		int freq[26]={0};
		for(j=i;str[j]!='\0';j++)
		{
			freq[str[j]-'a']++;
			if(freq[str[j]-'a']>1)
			{
				break;
			}
		}
		
		end=j-i;
		if(end>end1)
		{
			end1=end;
			start=i;
		}
	}
	for(i=start;i<start+end1;i++)
	{
		printf("%c",str[i]);
		
	}
	return 0;
}
