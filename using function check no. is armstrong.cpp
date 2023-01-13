#include<stdio.h>
#include<math.h>
int armstrong(int n);

int main()
{
	int n;
	printf("enter a no. :");
	scanf("%d",&n);
	int b=armstrong(n);
	if(b==1){
		printf("no. is armstrong");
	}
	else{
		printf("no. is not armstrong");
	}
	return 0;
}

int armstrong(int n){
	
	int sum=0;
	int a=n;
	while(a!=0){
		int r=a%10;
		sum=sum+pow(r,3);
		a=a/10;
	}
	if(sum==n){
		return 1;
	}
	else{
		return 0;
	}
}
