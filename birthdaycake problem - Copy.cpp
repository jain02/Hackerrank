#include<stdio.h>
int main(){
int i,n,max=0,a[100],count=0;
printf("Enter the no of Element in Array: ");
scanf("%d",&n);
printf("Enter the Number: ");
for(i=1;i<=n;i++){
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++){
if(max<a[i])
max=a[i];

}w
for(i=1;i<=n;i++)
if(a[i]==max)
count++;
printf("%d",count);
return 0;
}
