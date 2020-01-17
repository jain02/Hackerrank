#include<stdio.h>
int main(){
	int i, j, k,sum=0,sum1=0,arr_count,arr[100];
	printf("Enter the no of Element in Array: ");
	scanf("%d",&arr_count); 
	printf("Enter the Element: ");
	for(i=0;i<arr_count;i++){
		scanf("%d",&arr[i]);
	} 
  for (i = 1; i < arr_count; i++) {
    k = arr[i];
    for (j = i; j > 0 && k < arr[j - 1]; j--) {
      arr[j] = arr[j - 1];
    }
    arr[j] = k;
  }
  printf("After Sorting\n");
  for (i = 0; i < arr_count; i++) {
    printf("%d\n", arr[i]);
  }
  for (i = 0; i < arr_count - 1; i++) {
    sum = sum + arr[i];
    }
    printf("Smaller: %d\n",sum);
    for(i=arr_count;i>0;i--
	)
    {
        sum1=sum1+arr[i];
    }
    printf("Greater: %d",sum1);
}
