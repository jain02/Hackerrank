#include<stdio.h>
#include<math.h>
int main()
{
	int t,n[100000],i,x,r=0,count=0,p;
	printf("Enter the Test Cases: ");
	scanf("%d",&t);
	printf("Enter the cases: ");
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<t;i++)
	{
		x=n[i];
		p=n[i];
		while (x != 0)
   		{	
    	  r = r*10;
    	  r = r + x%10;
    	  printf("r: %d\n",r);
    	  if(r==0)
    	  {
    	  	count=count;
		  }
		  else
		  {
		  	  if(p%r ==	0)
		  	  {
		  	  	  count++;
				  printf("c: %d\n",count);	  						  		
			  }
			  else
			  {
			  	  count=count;
			  }
		  }
      	  x = x/10;
      	  printf("x: %d\n",x);
      	  r=0;
   		}
		printf("%d\n",count);   
		count=0;	
	}
}
