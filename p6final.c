#include<stdio.h>
int input();
int add(int n);
void output(n,sum);
int main()
{
  int n,sum;
  n=output();
  sum=add(n);
  output(n,sum);
  return 0;
}
int input()
{
  print("enter the value of n:");
  scanf("%d",&n);
  return n;
}
int add(int n)
{
  int i,sum=0;
  for(i=0;i<n;i++)
  { 
    sum=sum+i;
  }
  return sum;
}
void output(int n,int sum)
{
  printf("sum of %d numbers is %d",n,sum);
}