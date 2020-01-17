#include<stdio.h>
int main()
{
	int n,m,i,a[1000],count=0;
	scanf("%d %d",&n,&m); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(n>0)
	{
		n=n-m;
		count++;
	}
	count++;
	printf("%d",count);
}
