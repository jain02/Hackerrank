#include<stdio.h>
int main()
{
	int a=0,b=1,sum,i,n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	printf("%d \t %d\t",a,b);
	while(n>0)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("%d \t",b); 
		n--;
	}
}
