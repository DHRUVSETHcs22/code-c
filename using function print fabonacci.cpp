#include<stdio.h>

void fabonacci();

int main(){
	 
fabonacci();
	
}

void fabonacci(){
	int n1=0,n2=1,n3,n;
	printf("enter the term :");
	scanf("%d",&n);
	printf("%d  %d  ",n1,n2);
	for(int i=2;i<=n;i++){
		n3=n1+n2;
		printf("%d  ",n3);
		n1=n2;
		n2=n3;
		n3=n1;
		
	}
}
