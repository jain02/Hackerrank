#include<stdio.h>
int main()
{
	int a,i,sum=0,temp,n;
	printf("Enter the no.: ");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		temp= n % 10;
		sum=sum*10+temp;
		n=n/10;
	}
	if(a == sum)
	{
		printf("%d is armstrong",sum);		
	}
	else
	{
		printf("%d is not armstrong",sum);
	}
}
