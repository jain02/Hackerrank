#include<stdio.h>
int **add(int A[][],int B[][]);
int **mul(int Aa[][],int Bb[][]);
int main()
{
	int a[4][4],b[4][4],c[4][4],i,j;
	printf("Enter the Element of Frist matrix:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Element of Second matrix:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Element of Frist Matrix: \n");
	for(i=0;i<4;i++)
	{
	    printf("\n");
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\nElement of Second Matrix: \n");
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			printf("%d\t",b[i][j]);
		}
	}
	add(a,b);
	mul(a,b);
}
int add(int A[][],int B[][])
{
	int i,j,C[4][4];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			C[i][j]=(A[i][j]+B[i][j]);
		}
    }
}
int mul(int Aa[][],int Bb[][]);
{
    int p1,p2,p3,p4,p5,p6,p7,Cc[2][2];
	p1=a[0][0]*(b[0][1]-b[1][1]);
	p2=(a[0][0]+a[0][1])*b[1][1];
	p3=(a[1][0]+a[1][1])*b[0][0];
	p4=a[1][1]*(b[1][0]-b[0][0]);
	p5=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
	p6=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
	p7=(a[0][0]-a[1][0])*(b[0][0]+b[0][1]);
	Cc[0][0]=p5+p4-p2+p6;
	Cc[0][1]=p1+p2;
	Cc[1][0]=p3+p4;
	Cc[1][1]=p5+p1-p3-p7;
}
