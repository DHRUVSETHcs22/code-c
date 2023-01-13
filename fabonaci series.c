#include<stdio.h>
int main()
 {
 	int i,a=0 , b=1;
 	int n;
 	printf("enter n");
 	scanf("%d",&n);
 	
    printf("%d",a);
	 
	printf("%d",b); 
 	
 	for(i=2;i<n;i++)
 	{
 		int c= a+b;
 		printf("%d ", c);
 		a=b;
 		b=c;
	}
 }
 
