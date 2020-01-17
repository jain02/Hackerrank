#include<stdio.h>
int main()
{
	int i,j,t,n[100],n1[100];
	printf("Enter the Test Cases: ");
	scanf("%d",&t);
	printf("Enter the Number of cycles: ");
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
	}
	n1[0]=1;
	for(i=1;i<60;i++)
	{
		if(i % 2 == 0)
		{
			n1[i]=n1[i-1]+1;
		}
		else
		{
			n1[i]=n1[i-1] *2;
		}
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<60;j++)
		{
			if(j==n[i])
			{
				printf("i: %d\n",n1[j]);
				break;
			}		
		}
	}
}
