#include<stdio.h>
int main (){
	for(int i=1;i<=6;i++)
	{ 
	  for(int k=5;k>=1;k--){
	
	  printf("  ");
	 }
	 	for(int j=1;j<=6;j++){
			if(i==1||i==6||j==1||j==6){
		if(j==1&&i==1||j==6&&i==6||i==1&&j==6||i==6&&j==1){
			printf("  ");
	continue;
			}
			printf("* ");
			}	else{
		
			printf("  ");	}
		}printf("\n");
	}
}
