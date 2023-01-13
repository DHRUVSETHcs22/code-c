#include<stdio.h>
int main()
{
	int size,size1,size2;
	printf(" enter size of array 1:");
	scanf("%d",&size);
    printf(" enter size of array 2:");
	scanf("%d",&size1);
  size2=size+size1;
  int arr[size],srr[size1],xrr[size2];
  for(int i=0;i<size;i++){
  	printf("enter %d element of array 1 :",i+1);
  	scanf("%d",&arr[i]);
  	xrr[i]=arr[i];
  }
  int c=0;
  for(int i=size;i<size2;i++){
  	printf("enter %d element of array 2 :",c+1);
  	scanf("%d",&srr[i]);
  	xrr[i]=srr[i];
	c++;
  }
  for(int i=0;i<size2;i++){
  	printf("xrr[%d]:%d\t",i,xrr[i]);
  }
  
}
