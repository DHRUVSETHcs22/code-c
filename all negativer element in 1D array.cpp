#include<stdio.h>
int main(){
	int n;
	printf("enter size of array =");
	scanf("%d",n);
	int arr[10];
	printf("enter element of array\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
		for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			printf("%d\t",arr[i]);
		}
	}
	return 0;
}
