#include<stdio.h>
int main(){
	int num1 , num2 , HCF;
	printf("enter the first value :");
	scanf("%d",&num1);
	printf("enter the second value :");
	scanf("%d",&num2);
	
	for(int i=1;i<=num1&&i<=num2;i++)
{
	if(num1%i==0&&num2%i==0){
	
       HCF=i;
   }
	}	printf("%d", HCF);
} 
