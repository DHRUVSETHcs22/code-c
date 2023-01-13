#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE], reverse[MAX_SIZE];
    int flag;

    
    printf("Enter any string: ");
    gets(str);


    strcpy(reverse, str); 
    strrev(reverse);     
printf("after reverse\n");
puts(reverse);
    flag = strcmp(str, reverse);  
 
	  if(flag == 0)
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is Not Palindrome.");
    }

    return 0;
}
