#include<stdio.h>

void namasta();
void bonjur();

int main (){
	char c;
	printf("enter your country (i/f):");
	scanf("%c",&c);
	if(c=='i'){
		namasta();
	}
	else if(c=='f'){
		bonjur();
	}

	return 0;
}

void namasta(){
	printf("Namsata\n");
}

void bonjur(){
	printf("Bonjur");
}
