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
		int sum=0;
	if(r==c){
		printf("upper & lower tringal elements of given matrix\n");
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(i==j){
					printf("__");
				}
				if(i<j||i>j){
					sum+=arr[i][j];
					printf("%d ",arr[i][j]);
				}
			}printf("\n");
		}
	}
	printf("sum = %d",sum);
}
