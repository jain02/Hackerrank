#include<stdio.h>
#include<math.h>
int main()
{
	int t,a[1000][2],i,count1=0,j,sum,sum2,sum1;
	printf("Enter the Test cases: ");
	scanf("%d",&t);
	printf("Enter the Number: ");
	for(i=0;i<t;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);		
		}	
	}
	for(i=0;i<t;i++)
	{
		sum=ceil(sqrt(a[i][0]));
	//	printf("%d\n",sum);
		sum2=floor(sqrt(a[i][1]));
		printf("%d\n",sum2);
	//	sum1=sum2-sum+1;
		printf("%d\n",sum1);
	}
}
