#include <stdio.h>
int main()
{
    int n,pos,value; 
    printf("enter no. of element :");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
    printf("enter %d no:",i+1);	
        scanf("%d",&arr[i]);
    }
    printf("before deletion\n");
    for(int i=0;i<n;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("enter position for deleation :");
    scanf("%d",&pos);
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    printf("after deletion the value in given position\n");
    for(int i=0;i<n-1;i++){
       printf("arr[%d]=%d\n",i,arr[i]);
    }

}
