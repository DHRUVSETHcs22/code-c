#include<stdio.h>
int main(){
	int r,c,temp=0;
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
		printf("original matrix\n");
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				
					printf("%d| ",arr[i][j]);
				}printf("\n");
		}

		printf("sortied matrix in coloum\n");
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				for(int k=i+1;k<c;k++){
					if(arr[i][j]>arr[k][j]){
						temp=arr[i][j];
						arr[i][j]=arr[k][j];
						arr[k][j]=temp;
			    	}
				}
			}
		}
			for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				
					printf("%d| ",arr[i][j]);
				}printf("\n");
		}

}
