#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("enter the sentence :");
	gets(a);
	puts(a);
	printf("length of string : %d", strlen(a));
	
	return 0;
}
