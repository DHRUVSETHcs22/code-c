#include<stdio.h>
int main ()
{
	int r,c,i,j;
	printf("enter no. of rows:");
	scanf("%d",&r);
	printf("enter no. coloums:");
	scanf("%d",&c);
	
	int arr[r][c];
	printf("enter elements");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
        printf("elements are:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		printf("arr[%d%d]=%d\n",i,j,arr[i][j]);
		}
	}int srr[r][c];
	printf("duplicate is\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		
	srr[i][j]=arr[i][j];
		
		printf("srr[%d%d]=%d\n",i,j,srr[i][j]);
	}
}
	int sub[r][c];
	printf("sum of 2 array\n");
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		sub[i][j] = srr[i][j]-arr[i][j];
		
		printf("sub[%d%d]=%d\n",i,j,sub[i][j]);
	}
}
}
