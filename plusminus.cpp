#include<stdio.h>
int main()
{
	int arr[100],arr_count,i;
	float a,b,c,count=0.0,count1=0.0,count2=0.0;
	printf("Enter the Size of Array: ");
	scanf("%d",&arr_count);
	printf("Enter the Number: ");
	for(i=0;i<arr_count;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<arr_count;i++){
            if(arr[i]>0){
               count=++count;     
            }
            else if(arr[i]==0){
               count1=++count1;
            }
            else{
               count2=
			   ++count2;    
            }
        }
        a=(count/arr_count);
        b=(count1/arr_count);
        c=(count2/arr_count);
        printf("%f\n",a);
        printf("%f\n", b);
        printf("%f\n",c);
}
