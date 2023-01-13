#include <stdio.h>
int main (){
	int i,sum=0,n; 
	float avg ;
	 
	 for (i=0;i<=10;i++){
	 	printf ("number-%d :",i);
	 	scanf("%d",&n);
	 	sum+=n;
	 }
	     avg=sum/10.0;
        printf("the sum is %d\n the avg. is %0.2f",sum ,avg);	 
}
