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
  int temp=0;
  printf("orignal array\n");
  for(int i=0;i<size2;i++){
  	printf("xrr[%d]:%d\n",i,xrr[i]);
}
  for(int i=0;i<size2;i++){
  	for(int j=i;j<size2;j++){
  		if(xrr[i]>xrr[j]){
  			temp=xrr[i];
  			xrr[i]=xrr[j];
  			xrr[j]=temp;
		  }
	  }
  }
  printf("uniun and sorting of two matrix\n");
  int s=0;
  for(int i=0;i<size2;i++){
  	if(xrr[i]==xrr[i+1]){
  		s++;
	  }
  }
   for(int i=0;i<size2;i++){
   	if(xrr[i]==xrr[i+1]){
   		for(int j=i;j<size2;j++){
   		xrr[j]=xrr[j+1];	
		   }
	   }
   	
   }
  for(int i=0;i<size2-s;i++){
  	printf("xrr[%d]:%d\n",i,xrr[i]);
  }

}
