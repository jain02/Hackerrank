#include<stdio.h>
int fib(int n)
{
	int i,f[n];
	if(n<=1)
	   return 1;
	f[0]=0;f[1]=1;   
	for(i=2;i<n;i++)
	{
	     f[i]=f[i-2]+f[i-1];	
	}   
     return f[n-1];
}
int main()
{
	int m;
	printf("Enter the the No. of Element: ");
	scanf("%d",&m);
	printf("Fabonacci Series using Dynamic Programming: %d",fib(m));
	return 0;
}
