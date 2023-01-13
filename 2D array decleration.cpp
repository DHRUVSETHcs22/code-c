#include<stdio.h>
int main ()
{
	int r,c;
	printf("enter no. of rows:");
	scanf("%d",&r);
	printf("enter no. coloums:");
	scanf("%d",&c);
	printf("enter %d elements\n",r*c);
	int arr[r][c];
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
}
