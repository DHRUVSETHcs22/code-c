#include<stdio.h>
int main(){
	int i,k,j;
	for(i=1;i<=6;i++){
		for(k=5;k>=1;k--){
			printf(" ");
		}
		for(j=1;j<=6;j++){
		if(i==1||i==6||j==1||j==6){
			if(i==1&&j==6||j==1&&i==6||i==6&&j==1||j==6&&i==1){
				printf("  ");
				continue;
			}
			printf("* ");
		}	else{
				printf("  ");
			}
		}
		printf("\n");
		
	}
}
