#include<stdio.h>
#include<math.h>
int main()
{
	int i,a,s,n;
	
	printf("enter the value of a");
	scanf("%d",&a);
	
   for ( i=1;i<=a;i++){
   
	
	 n=i;
	 s=0;
	
	while(n!=0){
	  int r = n%10;
	  s=s+pow(r,3);
	  n=n/10;	
	  
	} 

	
	 if(s==i){
	 	printf("% d\n",i);
	 }
	 
}
	return 0;

}
