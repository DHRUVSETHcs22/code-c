#include<stdio.h>
int main ()
{
	int r,c,i,j;
	printf("enter no. of rows:");
	scanf("%d",&r);
	printf("enter no. coloums:");
	scanf("%d",&c);
	
	int arr[r][c];
	printf("enter 1-%d elements\n",r*c);
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
	}
	printf("even no. is\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		if (arr[i][j]%2==0){
			printf("arr[%d%d]=%d\n",i,j,arr[i][j]);
		}
		}
	}
	printf("odd no. is\n");
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		if (arr[i][j]%2!=0){
			printf("arr[%d%d]=%d\n",i,j,arr[i][j]);
		}
		}
	}
}
