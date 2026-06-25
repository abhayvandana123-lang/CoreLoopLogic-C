#include<stdio.h>
int main()
{
	char str1[100]; int freq[26]={0};int i;
	scanf("%s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
		freq[str1[i]-'a']++;
	}
	for(i=0;str1[i]!='\0';i++)
	{
		if(	freq[str1[i]-'a']==1)
		{
			printf("%c",str1[i]);
			return 0;
		}
	}
	printf("no non repeating charecter");
	return 0;
}
