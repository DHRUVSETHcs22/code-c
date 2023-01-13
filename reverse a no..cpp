#include<stdio.h>
int main (){
	int n,i, c=0;
	printf("enter the value:");
	scanf("%d",&i);
	while(i!=0){
		n=i%10;
		c=c*10+n;
		i=i/10;
	}
	printf("%d",c);
}
