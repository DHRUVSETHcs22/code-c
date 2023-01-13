#include<stdio.h>
int main(){
	int r,c;
	printf("enter no. of rows :");
	scanf("%d",&r);
	printf("enter no. of coloums :");
	scanf("%d",&c);
	int arr[r][c];
	printf("enter %d elements of matrix\n",r*c);
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				scanf("%d",&arr[i][j]);
			}
		}	
	if(r==c){
		printf("digonal elements of given matrix\n");
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(i==j){
					printf("%d\n",arr[i][j]);
				}
			}
		}
	}
}
