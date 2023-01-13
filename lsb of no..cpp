#include<stdio.h>
int main(){
	int n;
	printf("enter number");
	scanf("%d",&n);
	if(n&1)
	 printf("lsb of %d is set(1)",n);
	 else
	 printf("lsb of %d is unset(0)",n); 
	 return 0;
}
