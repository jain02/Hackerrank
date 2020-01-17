#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,sum,temp,a,b,c[100000],e[100000],count=0,l;
	float d,k;
	printf("Enter the Starting day number: ");
	scanf("%d",&i);
	printf("Enter the Ending day number: ");
	scanf("%d",&j);
	printf("Enter the Divisor: ");
	scanf("%f",&k);
	b=(j-i) + 1;
	for(a=0;a<b;a++)
	{
		c[a]=i;
		i++;	
	}
	for(a=0;a<b;a++)
	{
		e[a]=c[a];
	}
	for(a=0;a<b;a++)
	{
		sum=0;
		while(c[a]!=0)
		{
			temp=c[a]%10;
			sum=sum*10+temp;
			c[a]=c[a]/10;	
		}
		d=(abs(e[a]-sum))/k;
		l=d;
		if(l==d)
		{
			count++;
		}
	}
	printf("%d\n",count);
}
