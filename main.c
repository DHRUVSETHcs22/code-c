#include <stdio.h>

//simple intrest
int main()
{
   // P=principle , R=rate , T=time
    float P, R, T ; 
    
    printf("enter principle\n");
    scanf("%f", &P);
    
     printf("enter rate\n");
    scanf("%f", &R);
    
     printf("enter time \n");
    scanf("%f", &T);
    
    printf("simple intrest is %0.2f\n", P*R*T/100);
    
    return 0;
}
