#include <stdio.h>

int main ()
{

   int n;
   printf("enter a number")
   scanf("%d",&n);
   int a=n,p,s=0;
   while(a!=0)
   {
   	p=1;
   	int r=a%10;
   	for(int i=1;i<=r;i++)
   	{
   		p=p*i;
}
	   s=s+p;
	   a=a/10;
   }
   if(s==n)
     printf("number is strong");
     else
     printf("not strong");
}
