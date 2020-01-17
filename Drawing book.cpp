#include<stdio.h>
int main()
{
	int n,p,i,count=0,count1=0;
	printf("Enter the No. of Pages: ");
	scanf("%d",&n);
	printf("Enter the Page number to turn to: ");
	scanf("%d",&p);
	if((p == 1) || (n==p))
	{
		printf("0");
	}
	else if(n>1)
	{
		for(i=1;i<n;i++)
		{
			if((i+1) == p || (i+2) == p)
			{
				count++;
				break;
			}
			else
			{
				count++;
			}
			i=i+1;
		}
			if(n%2==0)
			{
				for(i=n;i>0;i--)
				{
					if((i-1) == p || (i-2) == p)
					{
						count1++;
						break;
					}
					else
					{
						count1++;
					}
				}	
			}
			else
			{
				for(i=n;i>0;i--)
				{
					if((i-1) == p ) 
					{
						count1=count1;
						break;
					}
					if((i-2) == p)
					{
						count1++;
						break;
					}
					else
					{
						count1++;
					}
				}		
			}
		if(count1>count)
		{
			printf("%d",count);
		}
		else
		{
			printf("%d",count1);	
		}
	} 
	else
	{
		printf("0");	
	}
}
