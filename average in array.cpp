#include<stdio.h>
int main()
{
	int n,sum=0,i;
	double average;
	printf ("enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;++i){
		printf("enter number %d :",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	average=(double)sum/n;
	printf("average is %.2lf",average);
}
