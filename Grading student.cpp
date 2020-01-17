#include<stdio.h>
int main()
{
	int i,j,k,p,arr[100],n;
	printf("Enter the Number of Students: ");
	scanf("%d",&n);
	printf("Enter the Grades: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<38)
		{
			printf("%d\n",arr[i]);		
		}	
		else
		{
			j = (arr[i] % 5);
			k = 5-j;
			p = arr[i] + k;
			if((p - arr[i])<3)
			{
				printf("%d\n",p);	
			}
			else
			{
				printf("%d\n",arr[i]);	
			}
		}
	}	
}
