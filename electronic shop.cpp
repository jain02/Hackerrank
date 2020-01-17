#include<stdio.h>
int main()
{
	int b,n,m,i,j,q,k[1000][100],key[100000],drives[100000],temp[1000][100];
	printf("Enter the Budget: ");
	scanf("%d",&b);
	printf("Enter the No. of Keyboard: ");
	scanf("%d",&n);
	printf("Enter the No. of Drives: ");
	scanf("%d",&m);	
	printf("Enter the Keyboard: ");	
	for(i=0;i<n;i++)
	{
		scanf("%d",&key[i]);
	}
	printf("Enter the Drives: ");	
	for(i=0;i<m;i++)
	{
		scanf("%d",&drives[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			temp[i][j]=key[i]+drives[j];
		}	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(temp[i][j]<=b)
			{
				k[i][j]=temp[i][j];	
			}
		}	
	}
	q=k[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(q<k[i][j])
			{
				q=k[i][j];
			}
		}	
	}
	if(q == 0 )
	{
		printf("-1");
	}
	else
	{
		printf("%d",q);	
	}
}
