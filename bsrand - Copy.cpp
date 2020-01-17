#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int selectionsort(int Ar[]);
int binearysearch(int A[],int ,int ,int );
int main()
{
	int a[100000],i,key,f=0,l,m;
	time_t end,start; 
	double tc;
	for(i=0;i<100000;i++)
	{
		a[i]=rand();
	}
	printf("ELEMENTS ARE: \n");
	for(i=0;i<100000;i++)
	{
		printf("%d\n",a[i]);
	}
	start=clock();
	selectionsort(a);
	printf("Enter the Key Element: ");
	scanf("%d",&key);
	l=99999;
	m=(f+1)/2;
	if(a[m]==key)
	{
		printf("Key Element found at %d Position\n",m+1);		
	}
    else if(a[m]<key)
	{
		binearysearch(a,m+1,l,key);
	}
	else
	{
		binearysearch(a,f,m-1,key);
	}
	end=clock();
    tc=(difftime(end,start)/CLOCKS_PER_SEC); 
    printf("\nTime complexity is:%lf\n",tc); 
}
int selectionsort(int Ar[])
{
	int i,j,p,min;
    for(i=0;i<100000;i++)
	{
		min=i;
		for(j=i+1;j<100000;j++)
		{
	        if(Ar[j]<Ar[min])
		    {
		    	min=j;
		    }
		}
		p=Ar[i];
		Ar[i]=Ar[min];
		Ar[min]=p;
	}
	printf("Sorted Order Are:\n");	
	for(i=0;i<100000;i++)
	{
		printf("%d\n",Ar[i]);
	}
}
int binearysearch(int Arr[],int f,int l,int key)
{
	int m;
	m=(f+l)/2;
	if(Arr[m]==key)
	{
		printf("Key Element found at %d Position\n",m+1);		
	}
    else if(Arr[m]<key)
	{
		binearysearch(Arr,m+1,l,key);
	}
	else
	{
		binearysearch(Arr,f,m-1,key);
	}
}
