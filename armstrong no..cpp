#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	
	printf("enter the value of a");
	scanf("%d",&a);
	
	int n=a;
	int s=0;
	int r;
	while(n!=0){
	  int r = n%10;
	  s=s+pow(r,3);
	  n=n/10;	
	  
	} 
	
	
	 if(s==a){
	 	printf("number is armstrong");
	 }
	 
	else{
		printf("number is not armstrong");
	}
	return 0;
}
