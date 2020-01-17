#include<stdio.h>
int main()
{
	int n,a[100],i,x=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter the Element: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i=i+1)
	{
		if(a[i]==0)
		{
			x=x;
			if(a[i+1]==0)
			{
				x++;
				if(a[i+2]==0)
				{
					x=x;
					i=i+1;
				}
			}
			else
			{
				x=x;
			}	
		}
		else
		{
			x=x;
			if(a[i+1]==1)
			{
				x=x;
			}
			else
			{
				x++;
			}
		}
	}
	printf("%d",x);
}
