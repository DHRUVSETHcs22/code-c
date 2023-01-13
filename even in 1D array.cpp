#include <stdio.h>
int main(){
	int n;
	printf("enter no. elements");
	scanf("%d",&n);
	int arr[n];
	printf("enter 1-%d no.",n);
	for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
	}
	printf("array is\n");
		for(int i=0;i<n;i++){
       printf("arr[%d]=%d\n",i,arr[i]);
	}
	printf("even no. is\n");
		for(int i=0;i<n;i++){
       if(arr[i]%2==0){
       	printf("arr[%d]=%d\n",i,arr[i]);
	   }
	}
	printf("odd no. is\n");
		for(int i=0;i<n;i++){
       if(arr[i]%2!=0){
       	printf("arr[%d]=%d\n",i,arr[i]);
	   }
	}
}
