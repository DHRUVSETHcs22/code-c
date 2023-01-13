#include<stdio.h>
int main(){
	int r,c,r1,c1;
	printf("enter no. of row for matrix 1 :");
	scanf("%d",&r);
	printf("enter no. of coloum for matrix 1 :");
	scanf("%d",&c);
	int arr[r][c];
	printf("enter %d element of first matrix\n",r*c);
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("enter no. of row for matrix 2 :");
	scanf("%d",&r1);
	printf("enter no. of coloum for matrix 2 :");
	scanf("%d",&c1);
	int xrr[r1][c1];
	printf("enter %d element of second matrix\n",r1*c1);
	
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			scanf("%d",&xrr[i][j]);
		}
	}
int flag,plag;
	if(r==r1&&c==c1){
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				
				if(arr[i][j]==xrr[i][j]){
					flag=0;
				}
				else{
					plag=1;
				}
			}
		}
	}
	if(flag==0&&plag!=1){
		printf("given matrixs are identity matrixs");
	}
	else{
		printf("not identity matrix");
	}
}
