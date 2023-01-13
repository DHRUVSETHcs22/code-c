#include<stdio.h>
int main ()
{
	int row;
	printf("enter row");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		
		for(int k=row-1;k>=i;k--){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
		
		printf("%d",j);
	}
	printf("\n");
}

	for(int i=2;i<=row;i++){
		
		for(int k=row-1;k>=i;k--){
			printf(" ");
		}
		for(int j=i;j<=row;j++){
		
		printf("%d",j);
	}
	printf("\n");
}
}

