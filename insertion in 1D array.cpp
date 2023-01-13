#include <stdio.h>
int main()
{
    int n,pos,value; 
    printf("enter no. of element :");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("before inserting\n");
    for(int i=0;i<n;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("enter the inserting value :");
    scanf("%d",&value);
    printf("enter position for inserting :");
    scanf("%d",&pos);
    for(int i=n-1;i>pos-1;i--){
        arr[i+1]=arr[i];
       
    }
    arr[pos]=value;
     n++;
    printf("after inserting the value\n");
    for(int i=0;i<n;i++){
       printf("arr[%d]=%d\n",i,arr[i]);
    }

}

