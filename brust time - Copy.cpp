#include<stdio.h>
int main()
{
	int bt[100],wt[100],i,j,sum=0;
	float avg,k;
	printf("Enter the No of Process you want: \n");
	scanf("%f",&k);
	printf("Enter the Brust Time: \n");
	for(i=0;i<k;i++)
	{
	    printf("p[%d]:",i+1);
	    scanf("%d",&bt[i]);
	}
	wt[0]=0;
	for(i=1;i<k;i++)
	{
		wt[i]=0;
		for(j=0;j<i;j++)
		{
			wt[i]=wt[i]+bt[j];
		}
	}
	for(i=0;i<k;i++)
	{
		sum=sum+wt[i];
	}
	avg=sum/k;
	for(i=0;i<k;i++)
	{
		printf("Waiting Time of p[%d] is: %d\n",i+1,wt[i]);
	}
	printf("Average Waiting Time is:%f\n ",avg);
}
