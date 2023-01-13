#include<stdio.h>
#include<math.h>
 int main(){
 int n;
   printf("enter the binary");
   scanf("%d",&n);
   
   int b=0;
   int s=0;
   while(n!=0)
   {
   	 int r=n%10;
   	 s=s+r*pow(2,b);
   	 b++;
   	 n=n/10;
	}
	printf("%d",s);	
}
