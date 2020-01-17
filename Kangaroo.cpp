#include<stdio.h>
#include<math.h>
int main()
{
	int x1,v1,x2,v2,i,j,k;
	printf("Enter the Location of First Kangaroo: ");
	scanf("%d",&x1);
	printf("Enter the Jump Distance From First Kangaroo: ");
	scanf("%d",&v1);
	printf("Enter the Location of Second Kangaroo: ");
	scanf("%d",&x2);
	printf("Enter the Jump Distance From Second Kangaroo: ");
	scanf("%d",&v2);
	j=abs(x1-v1);
	k=abs(x2-v2);
	printf("%d\n",j);
	printf("%d\n",k);
	while(1)
	{
		if(x2 > x1 && v2 > v1 || x1 > x2 && v1 > v2 || v1 == v2)
		{
			printf("NO");
			break;
		}
		else
		{
				x1 = x1+j;
				x2 = x2+k;
				printf("%d\n",x1);
				printf("%d\n",x2);
				if(x1 == x2)
				{
					printf("YES");
					break;
				}
	    }
	}
}

