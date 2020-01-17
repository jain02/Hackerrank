#include<stdio.h>
int main()
{
	int n,ar[100000],i,j,b,count=0;
	printf("Enter the No. of Socks: ");
	scanf("%d",&n);
	printf("Enter the Socks in the pile: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(j=0;j<n;j++)
    {
        for(i=0;i<(n-j-1);i++)
        {
            if(ar[i]>ar[i+1])
            {
              b=ar[i];
              ar[i]=ar[i+1];
              ar[i+1]=b;
            }
        }
    }
    printf("Sorted Order\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\n",ar[i]);
	}
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(ar[i]==ar[j])
    		{
    			printf("i: %d\n",ar[i]);
    			count++;
    			i++;
    			break;
			}
		}
	}
	printf("%d",count);
}
