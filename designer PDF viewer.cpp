#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,a[26],max=0,mul,k,q;
	char s1[50];
	printf("Enter the Number: ");
	for(i=0;i<26;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the word: ");
	scanf("%s",s1);
	k=strlen(s1);
	char s2[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(i=0;i<k;i++)
	{
		for(j=0;j<26;j++)
		{
			if(s1[i]==s2[j])
			{
				q=a[j];
				if(max<q)
				{
					max=q;
				}
				break;
			}
		}
	}
	mul=max*1*k;
	printf("%d",mul);
}
