#include<stdio.h>
#include<math.h>
int main()
{
	int a[3][3],i,j,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,min,diff[10];
	printf("Enter the Number: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int a1[3][3]={{8,1,6},{3,5,7},{4,9,2}};
	int a2[3][3]={{6,1,8},{7,5,3},{2,9,4}};
	int a3[3][3]={{8,3,4},{1,5,9},{6,7,2}};
	int a4[3][3]={{4,3,8},{9,5,1},{2,7,6}};
	int a5[3][3]={{6,7,2},{1,5,9},{8,3,4}};
	int a6[3][3]={{2,7,6},{9,5,1},{4,3,8}};
	int a7[3][3]={{4,9,2},{3,5,7},{8,1,6}};
	int a8[3][3]={{2,9,4},{7,5,3},{6,1,8}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum1=sum1+abs(a[i][j]-a1[i][j]);
			sum2=sum2+abs(a[i][j]-a2[i][j]);
			sum3=sum3+abs(a[i][j]-a3[i][j]);			
			sum4=sum4+abs(a[i][j]-a4[i][j]);
			sum5=sum5+abs(a[i][j]-a5[i][j]);
			sum6=sum6+abs(a[i][j]-a6[i][j]);
			sum7=sum7+abs(a[i][j]-a7[i][j]);
			sum8=sum8+abs(a[i][j]-a8[i][j]);
		}
		
	}
	printf("%d\n",sum1);
	printf("%d\n",sum2);
	printf("%d\n",sum3);
	printf("%d\n",sum4);
	printf("%d\n",sum5);
	printf("%d\n",sum6);
	printf("%d\n",sum7);
	printf("%d\n",sum8);
	diff[0]=sum1;
	diff[1]=sum2;
	diff[2]=sum3;
	diff[3]=sum4;
	diff[4]=sum5;
	diff[5]=sum6;
	diff[6]=sum7;
	diff[7]=sum8;
	min=diff[0];
	for(i=1;i<8;i++)
	{
		if(min>diff[i])
		{
			min=diff[i];
		}
	}
	printf("min: %d",min);
}
