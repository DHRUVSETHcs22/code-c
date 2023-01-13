#include<stdio.h>
#include<string.h>

int main(){
	
	char a[100];
	printf("please enter a sentence :");
	fgets(a,100,stdin);
	puts(a);

  for (int i = 0; i<strlen(a) ; i++){
  	int b=a[i];
    if(b>=65 && b<=90){
       b=b+32;
        }
        else if(b>=97&& b<=122){
        	b=b-32;
		}
		a[i]=b;
  }
    
  
  puts(a);
}
