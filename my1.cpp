#include<stdio.h>
int main (){
	for(int i=1;i<=5;i++)
	{
		for(int k=4;k>=i;k--){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		for(int a=2;a<=i;a++){
				printf("*" );
		}printf("\n");
	}
}
