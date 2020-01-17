#include<stdio.h>
int main()
{
	int ar[100],n,k,i,j,count=0;
	printf("Enter the Size of Array: ");
	scanf("%d",&n);
	printf("Enter the Value of K: ");
	scanf("%d",&k);
	printf("Enter the Array Element: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j && (ar[i]+ar[j])%k == 0)
			{
				count++;
			}
		}
	}
	printf("%d",count);
}
