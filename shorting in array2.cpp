#include<stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	printf("length of array : %d",n);
	int arr[n],temp=0;
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		printf("no. is:");
		printf("%d\n",arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n");
	printf("element of array sorted in increasing order :\n");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
