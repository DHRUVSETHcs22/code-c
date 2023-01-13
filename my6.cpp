#include<stdio.h>
int main(){
	int i,k,j;
	for(i=1;i<=6;i++){
		for(k=6;k>=1;k--){
			printf(" ");
		}
		
		for(j=1;j<=9;j++){
		if(i==6||j==9&&i==6||i==5&&j==1||i==5&&j==9||i==4&&j==2||i==4&&j==8||i==3&&j==7||i==3&&j==3||i==2&&j==4||i==2&&j==6||i==1&&j==5){
			printf("@ ");
		}	else{
				printf("  ");
			}
		}
		printf(" \n");
		
	}
}
