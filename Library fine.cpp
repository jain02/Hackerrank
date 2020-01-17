#include<stdio.h>
#include<math.h>
int main()
{
	int d1,m1,y1,d2,m2,y2,charge=0;
	printf("Enter the day,month,year on which book was be returned: ");
	scanf("%d %d %d",&d1,&m1,&y1);
	printf("Enter the day,month,year on which the book was due to be returned: ");
	scanf("%d %d %d",&d2,&m2,&y2);
	if(y1==y2)
	{
		if(m1==m2)
		{
			if(d1==d2)
			{
				printf("%d",charge);
			}
			else if(d1<d2)
            {
            	charge=0;
             	printf("%d",charge);
            }
			else
			{
				charge=15*abs(d1-d2);
				printf("%d",charge);
			}
		}
		else if(m1<m2)
        {
            	charge=0;
             	printf("%d",charge);
        }
		else
		{
			charge=500*abs(m1-m2);
			printf("%d",charge);
		}
	}
	else if(y1<y2)
	{
		charge=0;
		printf("%d",charge);
	}
	else
	{
		charge=10000;
		printf("%d",charge);
	}
}
