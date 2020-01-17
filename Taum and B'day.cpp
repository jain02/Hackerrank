#include<stdio.h>
int main()
{
	int t,i,b[10],w[10],bc[10],wc[10],z[10],k;
	printf("Enter the Test Cases: ");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		printf("Enter the Value of B and W: ");
		scanf("%d %d",&b[i],&w[i]);
		printf("Enter the Value of BC, WC and Z: ");
		scanf("%d %d %d",&bc[i],&wc[i],&z[i]);
	}
	for(i=0;i<t;i++)
	{
		if((bc[i]==wc[i]) && (b[i]==w[i]))
		{
			printf("1\n");
			k=(w[i]*wc[i]+b[i]*bc[i]);
			printf("a:%d\n",k);
		}
		else if((bc[i]<z[i] && wc[i]<z[i]))
		{
			printf("2\n");
			k=(w[i]*wc[i]+b[i]*bc[i]);
			printf("a:%d\n",k);
		}
		else if(bc[i]>(wc[i]+z[i]))
		{
			printf("3\n");
			k=((b[i]+w[i])*wc[i]+(b[i]*z[i]));
			printf("a:%d\n",k);
		}
		else if(wc[i]>(bc[i]+z[i]))
		{
			printf("4\n");
			k=((b[i]+w[i])*bc[i]+(w[i]*z[i]));
			printf("a:%d\n",k);
		}
		else if((b[i]==w[i]) &&(bc[i]>wc[i]))
		{
			printf("5\n");
			k=(wc[i]+z[i])*b[i]+(w[i]*wc[i]);
			printf("a:%d\n",k);
		}
		else if((b[i]==w[i]) && (bc[i]<wc[i]))
		{
			printf("6\n");
			k=(bc[i]+z[i])*w[i]+(b[i]*bc[i]);
			printf("a:%d\n",k);
		}
		else
		{
			printf("1\n");
			k=(w[i]*wc[i]+b[i]*bc[i]);
			printf("a:%d\n",k);
		}	
	}	
}
