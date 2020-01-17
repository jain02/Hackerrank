#include<stdio.h>
#include<math.h>
int main()
{
	int q,i,x[1000],y[1000],z[1000],k,j;
	printf("Enter the Queries: ");
	scanf("%d",&q);
	printf("Enter the position: ");
	for(i=0;i<q;i++)
	{
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
		scanf("%d",&z[i]);
	}
	for(i=0;i<q;i++)
	{
		printf("x: %d\n",x[i]);
		printf("y: %d\n",y[i]);
		printf("z: %d\n",z[i]);
	}
	for(i=0;i<q;i++)
	{
		k=abs(z[i]-x[i]);
		printf("k: %d\n",k);
		j=abs(z[i]-y[i]);
		printf("j: %d\n",j);
		if(k>j)
		{
			printf("Cat B\n");
		}
		else if(k == j)
		{
			printf("Mouse C\n");
		}
		else
		{
			printf("Cat A\n");
		}
	}
}
