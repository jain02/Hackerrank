#include<stdio.h>
int main()
{
	long i,j,k,s,t,a,b,m,n,app[100],org[100],count1=0,count2=0;
	printf("Enter the Starting Point: ");
	scanf("%ld",&s);
	printf("Enter the Ending Point: ");
	scanf(" %ld",&t);
	printf("Enter the Location of Apple tree: ");
	scanf("%ld",&a);			
	printf("Enter the Location of Orange tree: ");
	scanf(" %ld",&b);
	printf("Enter the no of Apple: ");
	scanf("%ld",&m);
	printf("Enter the no of Orange: ");
	scanf(" %ld",&n);
	printf("Enter the distances at which each apple falls from the tree: ");
	for(i=0;i<m;i++)
	{
		scanf("%ld",&app[i]);	
	}
	printf("Enter the distances at which each orange falls from the tree: ");
	for(i=0;i<n;i++)
	{
		scanf("%ld",&org[i]);	
	}
	for(i=0;i<m;i++)
	{
		j=a+app[i];
		if(j>=s && j<=t)
		{
			count1++;
		}
	}
	printf("%ld\n",count1);	
	for(i=0;i<n;i++)
	{
		k=b+org[i];
		if(k>=s && k<=t)
		{
			count2++;
		}
	}	
	printf("%ld",count2);
}
