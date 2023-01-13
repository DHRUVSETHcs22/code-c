#include<stdio.h>
int main(){
	int i,k,j;
	for(i=1;i<6;i++){
		for(k=5;k>=1;k--){
			printf(" ");
		}
		
		for(j=1;j<=9;j++){
		if(j==1&&i==4||j==7&&i==2||j==8&&i==3||j==9&&i==4||j==2&&i==3||j==3&&i==2||i==1||i==5){
			if(i==1&&j==3||j==1&&i==6||i==1&&j==1||i==1&&j==7||j==8&&i==1||j==9&&i==1||j==2&&i==1){
				printf("  ");
				continue;
			}
			printf("* ");
		}	else{
				printf("  ");
			}
		}
		printf(" \n");
		
	}
}
