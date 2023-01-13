#include<stdio.h>
#include<math.h>
int cube(int n);
int main()
{
	int n;
	printf("enter no. =");
	scanf("%d",&n);
	int result=cube(n);
	printf("cube is %d",result);
	return 0;
}

int cube(int n){
	int c=pow(n,3);
	return c;
}
