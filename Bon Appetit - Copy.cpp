#include<stdio.h>
int main()
{
	int bill[10000],n,k,b,i,sum=0,avg;
	printf("Enter the No. of item: ");
	scanf("%d",&n);
	printf("Enter the 0-based index of the item that Anna did not eat: ");
	scanf("%d",&k);
	printf("Enter the items: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bill[i]);
	}
	printf("Enter the  amount of money that Brian charged Anna for her share of the bill: ");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		sum=sum+bill[i];	
	}	
	sum=sum-bill[k];
	printf("%d\n",sum);
	avg=sum/2;
	printf("%d\n",avg);
	sum=b-avg;
	if(sum==0)
	{
		printf("Bon Appetit");
	}
	else
	{
		printf("%d",sum);	
	}
}
