#include<stdio.h>
int main()
{
	int s[100],d,m,i,n,j,temp,count=0;
	printf("Enter the Number of Square of Integer: ");
	scanf("%d",&n);
	printf("Enter the Sqaure of Integer: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	printf("Enter the Day: ");
	scanf("%d",&d);
    printf("Enter the Month: ");
	scanf("%d",&m);	
	if(m == 1)
	{
		if(s[0]==d)
		{
			count++;
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			temp=0;
			for(j=i;j<m+i;j++)
			{
				temp=temp+s[j];
			}
			if(temp == d)
			{
				count++;
			}
		}
	}
	printf("%d\n",count);
}
