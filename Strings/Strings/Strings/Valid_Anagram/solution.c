#include<stdio.h>
int main()
{
	char str1[100];int i;int freq[26]={0};int length1=0;int length2=0;char str2[100];int flag=0;
	scanf("%s",str1);
	scanf("%s",str2);
	for(i=0;str1[i]!='\0';i++)
	{
		length1++;
	}
	for(i=0;str1[i]!='\0';i++)
	{
		length2++;
	}
	if(length1!=length2)
	{
		printf("not anagram");
	}
	for(i=0;str1[i]!='\0';i++)
	{
		freq[str1[i]-'a']++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		freq[str2[i]-'a']--;
	}
	for(i=0;i<26;i++)
	{
		if(freq[i]>0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("anagram");
	}
	else if(flag==1)
	{
		printf("not anagram");
	}
	
	
	
}
