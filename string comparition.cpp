#include<stdio.h>
#include<string.h>

int main(){

	char str1[100];
	char str2[100];
	printf("enter the word :");
	fgets(str1,100,stdin);
	puts(str1);
printf("enter second word");
fgets(str2,100,stdin);
puts(str2);
int val=strcmp(str1,str2);
if(val==0){
	printf("yes");
}
	return 0;
}
