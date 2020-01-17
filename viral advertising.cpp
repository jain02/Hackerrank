#include<stdio.h>
int main()
{
	int i,div,n,sum=0,s;
	printf("Enter the no. of Days: ");
	scanf("%d",&n);
	s=5;
	for(i=0;i<n;i++)
	{
		div=(s/2);
		printf("div: %d\n",div);
		sum=sum+div;
		printf("sum: %d\n",sum);
		s=div*3;
		printf("s: %d\n",s);
	}
	printf("%d",sum);
}
