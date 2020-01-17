#include<stdio.h>
int main()
{
	 int n,score[100000],minimum[100000],maximum[100000],min=0,max=0,i;
	printf("Enter the Number of Games: ");
	scanf("%d",&n);
	printf("Enter the Score: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&score[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("scr: %d\n",score[i]);
	}
	minimum[0]=maximum[0]=score[0];
	printf("maximum: %d minimum: %d\n",maximum[0],minimum[0]);
	for(i=1;i<n;i++)
	{
		maximum[i]=score[i];
		minimum[i]=score[i];
		if((maximum[i-1]<maximum[i]) && (minimum[i-1]<minimum[i]))
		{
			maximum[i]=maximum[i];
			minimum[i]=minimum[i-1];
			printf("maximum: %d minimum: %d\n",maximum[i],minimum[i]);
			if(maximum[i-1]==maximum[i])
			{
				max=max;
				printf("max: %d\n",max);
			}
			else
			{
				max++;
				printf("max: %d\n",max);
		    }
			if(minimum[i-1]==minimum[i])
			{
				min=min;
				printf("min: %d\n",min);
			}
			else
			{
				min++;
				printf("min: %d\n",min);
			}
		}
		else if((maximum[i-1]>maximum[i]) && (minimum[i-1]>minimum[i]))
		{
			maximum[i]=maximum[i-1];
			minimum[i]=minimum[i];
			printf("maximum: %d minimum: %d\n",maximum[i],minimum[i]);
			if(maximum[i-1]==maximum[i])
			{
				max=max;
				printf("max: %d\n",max);
			}
			else
			{
				max++;
				printf("max: %d\n",max);
		    }
			if(minimum[i-1]==minimum[i])
			{
				min=min;
				printf("min: %d\n",min);
			}
			else
			{
				min++;
				printf("min: %d\n",min);
			}
		}
		else
		{
			maximum[i]=maximum[i-1];
			minimum[i]=minimum[i-1];
			printf("maximum: %d minimum: %d\n",maximum[i],minimum[i]);
			if(maximum[i-1]==maximum[i])
			{
				max=max;
				printf("max: %d\n",max);
			}
			else
			{
				max++;
				printf("max: %d\n",max);
		    }
			if(minimum[i-1]==minimum[i])
			{
				min=min;
				printf("min: %d\n",min);
			}
			else
			{
				min++;
				printf("min: %d\n",min);
			}
		}
	}
}

