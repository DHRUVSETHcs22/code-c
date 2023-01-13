#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("enter the sentence :");
	scanf("%s",a);
	printf("%s\n",a);
	printf("upper case : %s", strupr(a));
	
	return 0;
}
