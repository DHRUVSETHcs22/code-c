#include<stdio.h>
int main ()
{
	int n,a; 
		printf("enter number ");
		scanf("%d",&n); int c;
		for(int j=1;j<=n;j++){
		a=j;c=0;
		for(int i=1;i<=a;i++)
		{
			if(a%i==0){
			c++;
			}
}
		if(c==2){
			printf("%d is prime\n",j);
		}
	
}
}
	
