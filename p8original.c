#include<math.h>
#include<stdio.h>
float input()
{
  float n;
  printf("enter the number:");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float root;
  root=sqrt(n);
}
void output(float n,float result )
{
  printf("the square root of %f is %f", n,result );
}
int main()
{
  float n,result ;
  n=input();
  result=my_sqrt(n);
  output(n,result);
}
