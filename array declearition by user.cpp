#include<stdio.h>
int main (){
	int i=0;
	int values[6];
	
	for (i=0;i<5;i++)
	{
	printf("enter %d integer :",i+1);
		scanf("%d\n",& values[i]);
	}
	printf("displaying integers\n");
		for (i=0;i<5;i++)
	{
		printf("%d\n",values[i]);
	}
	return 0;
}
