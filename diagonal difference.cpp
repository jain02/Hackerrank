#include<stdio.h>
#include<math.h>
int diagonalDifference(int r, int col, int arr[r][col]) 
{
		    int i,j,b=0,a=0,c;
		for(i=0;i<r;i++){
		       for(j=0;j<col;j++){
		         if(r==col){
		             b=b+arr[r][col];
		         } 
		    }
		  }
		for (i = 0; i < r; i++) {
		  for (j = col; j >0; j--) {
		     a= a+arr[r][col];
		     col--;
		     break;
		    }
		}
		c=abs(b-a);
		printf("%d",c);	
		return 0;
}
int main(){
	int arr[100][100],i,j,k,q,c;
	printf("Enter the no of rows:");
	scanf("%d",&i);
	j=i;
	printf("Enter the Element: ");
	for(k=0;k<i;k++){
		for(q=0;q<j;q++){
			scanf("%d",arr[k][q]);
		}
	}
	diagonalDifference(i,j,arr[k][q]);
}
