#include<stdio.h>
int main()
{
		int n[100],m[100],s[100],i,count,t,j,temp;
		printf("Enter the Test Cases: ");
		scanf("%d",&t);
		for(i=0;i<t;i++)
		{
			printf("Enter the number of prisoners: ");
			scanf("%d",&n[i]);
			printf("Enter the number of sweets: ");
			scanf("%d",&m[i]);
			printf("Enter the chair number to begin passing out sweets from: ");
			scanf("%d",&s[i]);
			count=s[i];
			temp=m[i];
			for(j=1;j<temp;j++)
			{
				if(count==n[i])
				{
					count=1;
				}
				else
				{
					count++;
					printf("%d\n",count);
				}
			}
			printf("i: %d\n",count);	
		}	
}
