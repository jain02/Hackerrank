#include<stdio.h>
int main()
{
	int n,a[20],i,j,swap,sum=0;
	printf("Enter the No of Element: \n");
	scanf("%d",&n);
	printf("Enter the Element: \n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<(n-j-1);i++)
		{
			if(a[i]>a[i+1])
		    {
		      swap=a[i];
		      a[i]=a[i+1];
		      a[i+1]=swap;
		   }
	    }
	}
	printf("Sorted Order Are: \n");
	for(j=0;j<n;j++)
	{
		printf("%d\n",a[j]);
	}
	for(i=(n/2);i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of last %d Element: %d",(n/2)+1,sum);
}
