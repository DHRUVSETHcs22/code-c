#include<stdio.h>
int main ()
{
	int r,c,r1,c1;
	printf("enter no. of rows:");
	scanf("%d",&r);
	printf("enter no. coloums:");
	scanf("%d",&c);
	
	int arr[r][c];int srr[r][c];
	printf("enter elements of first array\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
		printf("enter no. of rows:");
	scanf("%d",&r1);
	printf("enter no. coloums:");
	scanf("%d",&c1);
		printf("enter elements of second array\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&srr[i][j]);
		}
	}
	
        printf("array of %d*%d\n",r,c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		printf("arr[%d%d]=%d\n",i,j,arr[i][j]);
		}
	}
	printf ("second array\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		
		printf("srr[%d%d]=%d\n",i,j,srr[i][j]);
	}
}
	int mult[r][c];
	printf("multiply of 2 array\n");
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
	     for(int k=0;k<c;k++){
	     	mult[i][j]+=arr[i][k]*srr[k][j];
	     	
		 }
		
	}
}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
	printf("multi[%d%d]=%d\n",i,j,mult[i][j]);
		}
	}
}
