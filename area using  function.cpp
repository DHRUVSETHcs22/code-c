#include<stdio.h>
#include<math.h>
int diameter(int r);
float curr(int r);
float area(int r);
int main()
{
int r;
printf("enter radius =");
scanf("%d",&r);
float b,c;int a;
a=diameter(r);
b= curr(r);
c=area(r);
printf("diameter is %d\n",a);
printf("cirrcumferenc is %0.2f\n",b);
printf("area is %0.2f",c);
	return 0;
}

int diameter(int r){
  int a=2*r;
  return a;
}
float curr(int r){
float b=3.14*2*r;
return b;
}
float area(int r){
  float c=3.14*pow(r,2);
  return c;
}
