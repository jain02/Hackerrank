#include<stdio.h>
int main()
{
	int i,n,x=1;
	printf("Enter a No.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=x*i;
		printf("x:%d\n",x);
	}
	printf("%d",x);
}
