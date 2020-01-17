#include<stdio.h>
int main()
{
    int n,k,c[50],x,i,e=100;
    //printf("Enter the Value of n and k: ");
    scanf("%d %d",&n,&k);
    //printf("Enter the Value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    if(n==k)
    {
        if(c[k-1] == 1)
            e=e-2-1;
        else
            e=e-1;  
    }
    else
    {
        if(c[k] == 1)
            e=e-2-1;
        else
            e=e-1;
    }          
    i=k*2;      
    while(0!=(i%n))
    {
        x=(i%n);
        while(x>=n)
        {
            x=x-n;
        }
        if(c[x]==1)
        {
            e=e-1-2;
        }
        else if(c[x]==0)
        {
            e=e-1;
        }
        i=i+k;
     }   
     if(n==k)
     {
         printf("%d",e);
     }   
     else
     {
        if(c[0] == 1)
        {
            e=e-2-1;
           printf("%d",e);
        }   
        else
        {
            e=e-1;
            printf("%d",e);
        } 
     }    
}
