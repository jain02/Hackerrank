#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	float y,x;
	char w,z,a; 
	printf("Enter the Starting Time of Class: \n");
	scanf("%f",&x);
	printf("Enter the Ending Time of Class: \n");
	scanf("%f",&y);
	printf("Enter the  Faculty Name: \n");
	scanf("%s",&z);
	printf("Enter the Subject: \n");
	scanf("%s",&w);
	printf("Please Enter the Strength of Class: \n");
	scanf("%d",&n);
	printf("Time For the Roll Call Please Make Sure that you will not miss Your Roll Call\n");
	for(i=1;i<=n;i++)
	{
	    printf("Roll No. %d:\n",i);	
	    scanf("%s",&a);	
    }
}
