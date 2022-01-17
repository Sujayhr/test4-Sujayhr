#include<stdio.h>
int input(int a,int b)
{
printf("Enter a numbers\n");
scanf("%d",&a);
return a;
}
void add(int a, int b, int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int *sum)
{
printf("%d",*sum);
}
int main()
{
int x1,y1,x,y,z,sum;
  x=input(x1,y1);
  y=input(x1,y1);
  add(x,y,&sum);
  output(x,y,&sum);
return 0;
}