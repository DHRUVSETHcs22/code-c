#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	
	printf("enter the value of a");
	scanf("%d",&a);
	
    
	int b=a, c=0;
	
	
	while(b!=0)  // first while loop
	{
	 int i = b%10;
	 c++;
	 b/=10;
	}
	
	int s=0;
	int n=a;
	
	while(n!=0){  // second while loop
	  int r = n%10;
	  s=s+pow(r,c);
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
