#include<stdio.h>
int main(){
	int n,sum=0,i,c=0;
	printf("enter the number of element:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter the number %d:",i+1);
		scanf("%d",&arr[i]);
		}	
		for(i=0;i<n;i++){
	
		if(arr[i]%2==0){
			c++;
	}
	}
	if(c==2){
		sum+=arr[i];
		printf(" %d",sum);
	}
		

}
