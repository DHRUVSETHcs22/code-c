#include<stdio.h>
int main() {

   int arr[10], i, s, j, p, sum = 0;

   printf("Enter size of an array:");
   scanf("%d", &s);

   
   for (i = 0; i < s; i++) {
      printf("Enter array elements:"); 
	  scanf("%d", &arr[i]);
   }

   for (i = 0; i < s; i++) {
       j = 2;
       p = 1;
       while (j < arr[i]) {
           if (arr[i] % j == 0) {
               p = 0;
               break;
           }
           j++;
       }
       if (p == 1)
           sum = sum + arr[i];
   }
   
   printf("Sum of prime numbers:%d", sum);

   return 0;
}
