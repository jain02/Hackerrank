#include<stdio.h>
int main()
{
	int a[100],b[100],n,m,i,a1[100],j,count=0;
	printf("Enter the no of Element in First Array: ");
	scanf("%d",&n);
	printf("Enter the no of Element in Second Array: ");
	scanf("%d",&m);
	printf("Enter the Element in First Array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Element in Second Array: ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<20;i++)
	{
		a1[i] = (a[0] * (i+1));
		printf("%d\n",a1[i]);
	}
	for(i=0;i<(n);i++)
	{
			if(a[i]<a1[i])
			{
				j=(a1[i] % a[i]);
			//	printf("%d\n",a1[i]);
				if(j == 0)
				{
					count++;
				}
			}
			else
			{
				if(a[i]>a1[i])
				{
					j=(a[i] % a1[i]);
		//			printf("%d\n",a1[i]);
					if(j == 0)
					{
						count++;
					}
				}	
			}
	}
	for(i=0;i<(m);i++)
	{
			if(b[i]>a1[i])
			{
				j=(b[i] % a1[i]);
				if(j == 0)
			    {
				   count++;
			    }
			}
			else
			{
				if(b[i]<a1[i])
				{
					j=(a1[i] % b[i]);
		//			printf("%d\n",a1[i]);
					if(j == 0)
					{
						count++;
					}
				}	
			}
	}
	printf("%d",count);
}
