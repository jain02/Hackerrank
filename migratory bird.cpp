#include<stdio.h>
int main()
{
	int ar[100000],n,i,j,count,temp[100000],k[100000],q;
	printf("Enter the Size of Array: ");
	scanf("%d",&n);
	printf("Enter the Array Element: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(ar[i]==ar[j])
			{
				count++;
			}
		}
		temp[i]=count;
		printf("i: %d %d\n",ar[i],temp[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(temp[i] > temp[j])
			{
				k[i]=ar[i];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(k[i]<k[i+1])
	}
}
