#include<stdio.h>
int main() {
	int num1 , num2 ,max;
	printf("enter the first value :");
	scanf("%d",&num1);
	printf("enter the second value :");
	scanf("%d",&num2);
	if(num1>num2){
		max =num1;
	}
	else{
	 max=num2;	
	}
	while(1){
		if(max%num1==0&&max%num2==0)
	{
		 	 printf("%d",max);
		break;
	}max++;
  }
}
