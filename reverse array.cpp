 #include <stdio.h>

int main()
{
 
 int n,a;
 printf("enter n");
scanf("%d",&n);
 
int marks[n];

for( a=0;a<n;a++){
    scanf("%d",&marks[a]);
    
}
printf("after reversing\n");
for(a=n-1;a>=0;a--){
    printf("%d\n",marks[a]);
}
return 0;
}
