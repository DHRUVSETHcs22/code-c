#include<stdio.h>

int max();

int main()
{
	int a;
	a=max();
	printf("max. no. =%d\n",a);

	return 0;
}

int max(){
	int n;
	printf("enter size of array :");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("enter arr[%d] no. =",i);
		scanf("%d",&arr[i]);
	
	}
	int a=arr[0];
	for(int i=1;i<n;i++){
		if(a<arr[i]){
			a=arr[i];
		}
	}
	int xrr[n];
	for(int i=0;i<n;i++){
	xrr[i]=arr[i];
	
	}
	int b=xrr[0];
	for(int i=1;i<n;i++){
		if(b>xrr[i]){
			b=xrr[i];
		}
	}
	printf("min no. =%d\n",b);
	return a;
}
