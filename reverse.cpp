#include<stdio.h>
int main()
{
	int a,sum=0,temp,num;
	printf("Enter the Number: ");
	scanf("%d",&a);
	temp=a;
	num=a;
	while(a>0)
	{
		temp=a%10;
		sum=sum*10+temp;
		a=a/10;	
	}
	printf("%d\n",sum);
	if(num==sum)
	{
		printf("Enter Number is Palindrome\n");
	}
	else
	{
		printf("Enter the Number is not palindrome\n");
	}
}
