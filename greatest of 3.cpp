#include<stdio.h>
int main()
{
	int a,b,c,r;
	printf("Enter Three Number: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("%d\n",a);
	}
	else if(b>a && b>c)
	{
		printf("%d\n",b);
	}
	else
	{
		printf("%d\n",c);
	}
	
}
