#include<stdio.h>
int main()
{
	char str1[100];char str2[100];char str3[100];int i;int j;
	scanf("%s",str1);
		scanf("%s",str2);
			scanf("%s",str3);
			for(i=0;str1[i]!='\0';i++)
			{
				if(str1[i]!=str2[i]||str1[i]!=str3[i])
				{
						break;
				}
			}
			for(j=0;j<i;j++)
			{
				printf("%c",str1[j]);
			}
	
}
