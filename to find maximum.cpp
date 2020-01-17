#include<stdio.h>
int fmax(int A[],int ,int );
int main()
{
	int i,low=0,high,n,a[40];
	printf("Enter the no of element: \n");
	scanf("%d",&n);
	printf("Enter the Element: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	high=n;
	fmax(a,low,high);
}
int fmax(int A[],int low ,int high)
{
	int mid; 
	if(high==low)
	{
		 	printf("Maximum Value is: %d\n",A[low]);		
	}
	mid=(low+high)/2;
	if(A[mid]>A[mid-1] && A[mid]>A[mid+1])
	{
		return A[mid];
	}
	else if(A[mid-1]>A[mid])
	{
		fmax(A,low,mid-1);
	}
	else
	{
		fmax(A,mid+1,high);
	}
}
