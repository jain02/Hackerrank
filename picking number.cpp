#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[100],b,i,j,diff,count,count1=0;
	printf("Enter the Size of Array: ");
	scanf("%d",&n);
	printf("Enter the Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
    {
        for(i=0;i<(n-j-1);i++)
        {
            if(a[i]>a[i+1])
            {
              b=a[i];
              a[i]=a[i+1];
              a[i+1]=b;
            }
        }
    }
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<=i;j++)
		{
			diff=abs(a[i]-a[j]);
			if(diff==1 || diff==0)
			{
				count++;
				if(count>count1)
				{
					count1=count;
				}
			}
		}	
	}
	printf("%d",count1);
}
