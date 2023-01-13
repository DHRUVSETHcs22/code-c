#include<stdio.h>
int main(){
	int n,sum=0;
	printf("enter size of array =");
	scanf("%d",n);
	int arr[n];
	printf("enter element of array\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
		for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
		sum+=arr[i];
	}
	printf("sum =%d",sum);
	return 0;
}
