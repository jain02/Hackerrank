#include<stdio.h>
#include<math.h>
int main()
{
	int n,k,height[100000],i,diff,max;
	printf("Enter the Number of hurdles: ");
	scanf("%d",&n);
	printf("Enter the maximum height Dan can jump: ");
	scanf("%d",&k);
	printf("Enter the hurdles: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&height[i]);
	}
	max=height[0];
	for(i=0;i<n;i++)
	{
		if(max<height[i])
		{
			max=height[i];
		}
	}
	if(k>max)
	{
		printf("0");
	}
	else
	{
		diff=abs(max-k);
		printf("%d",diff);
	}
}
