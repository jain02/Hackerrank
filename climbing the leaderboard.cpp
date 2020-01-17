#include<stdio.h>
int main()
{
	int n,m,i,j,count=1,count3=1;
	printf("Enter the number of players on the leaderboard: ");
	scanf("%d",&n);
	int score[n],count1[n];
	printf("Enter the Scores: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&score[i]);
	}
	printf("Enter the number games Alice plays: ");
	scanf("%d",&m);
	int alice[m],count2[m];
	printf("Enter the Score of Alice: ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&alice[i]);
	}
	count1[0]=count;
	for(i=1;i<n;i++)
	{
		if(score[i] == score[i-1])
		{
			count1[i]=count;
		}
		else
		{
			count1[i]=++count;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("i: %d\n",count1[i]);
	}
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			if(alice[j]==score[i])
			{
				count2[j]=count1[i];
				break;
			}
			else if(alice[j]>score[i])
			{
				count2[j]=count3;
				break;				
			}
			else if(alice[j]>score[i+1] && alice[j]<score[i])
			{
				count2[j]=count1[i]+1;
				break;
			}
			else if(score[n-1]>alice[j])
			{
				count2[j]=count1[n-1]+1;
				break;
			}
		}
	}
	for(j=0;j<m;j++)
	{
		printf("I: %d\t",count2[j]);
	}
}

