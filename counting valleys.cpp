#include<stdio.h>
int main()
{
	int n,i,count=0,valley=0;
	char s[100000];
	printf("Enter the Steps Grays takes: ");
	scanf("%d",&n);
	printf("Enter the String decsribing his Path: ");
	scanf("%s",s);
	for(i=0;i<n;i++)
	{
		if(s[i] == 'U')
		{
			count++;
		}
		else 
		{
			count--;
			if(count == -1)
			{
				valley++;
			}
		}
	}
		printf("%d",valley);
}
