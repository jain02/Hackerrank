#include<stdio.h>
int main()
{
	int i,min=0,max=0,maximum[1000],minimum[1000],score[1000],n;
	printf("Enter the No of Games: ");
	scanf("%d",&n);
	printf("Enter the Scores: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&score[i]);
	}
	maximum[0]=score[0];
	minimum[0]=score[0];
	for(i=1;i<=n;i++)
	{
		if(score[i-1]<score[i])
		{
			minimum[i]=score[i-1];
			maximum[i]=score[i];
			printf("%d\t",minimum[i-1]);
			printf("%d\n",maximum[i-1]);
			if(minimum[i-1] == minimum[i])
			{
				min=min;
			}
			else
			{
				min++;
			}
			if(maximum[i-1] == maximum[i])
			{
				max=max;
			}
			else
			{
				max++;
			}
		}
		else
		{
			if(score[i-1]>score[i])
			{
				minimum[i]=score[i];
				maximum[i]=score[i-1];
				printf("%d\t",minimum[i-1]);
				printf("%d\n",maximum[i-1]);
				if(minimum[i-1] == minimum[i])
				{
					min=min;
				}
				else
				{
					min++;
				}
				if(maximum[i-1] == maximum[i])
				{
					max=max;
				}
				else
				{
					max++;
				}
			}
		}
	}
	printf("%d %d",max,min);
}
