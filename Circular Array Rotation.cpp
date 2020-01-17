#include<stdio.h>
int main()
{
	int n,k,q,a[100000],m[100000],b[100000],i,j;
	printf("Enter the no. of Element in Array: ");
	scanf("%d",&n);
	printf("Enter the no. of Rotation Count: ");
	scanf("%d",&k);
	printf("Enter the no. of Queires: ");
	scanf("%d",&q);
	printf("Enter the Array Element: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Queires: ");
	for(i=0;i<q;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j]=a[j];
		}
		a[0]=a[n-1];
		for(j=0;j<(n-1);j++)
		{
			a[j+1]=b[j];
		}
	}
	for(i=0;i<q;i++)
	{
		printf("%d\n",a[m[i]]);
	}
}
