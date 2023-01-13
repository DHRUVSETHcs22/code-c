#include<stdio.h>
int main ()
{
	int age,DOB,pyr; 
	printf ("enter your D.O.B. : \n");
	scanf("%d",&DOB);
	printf ("enter present year : \n");
	scanf("%d",&pyr);
	age=pyr-DOB;
	printf("you are %d year old",age);
	
}

