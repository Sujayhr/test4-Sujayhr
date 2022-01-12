#include<stdio.h>
int input ()
{
int p;
printf("Enter a number\n");
scanf("%d",&p);
return p;
}
int cmp(int a, int b, int c)
{
if(a>b&&a>c)
  {
return a;
  }
else if(b>c)
  {
return b;
  }
else if(c>b)
  {
return c;
  }
else
  {
printf("All are equal\n");
return 0;
  }
}

void input1 (int *a, int *b,int *c)
{
printf("enter 3 numbers\n");
scanf("%d%d%d",a,b,c);
}

void cmp1(int a, int b, int c, int *large)
{
if(a>b&&a>c)
  {
    *large=a;
printf("%d is the largest",*large);
  }
else if(b>c)
  {
    *large=b;
printf("%d is the largest",*large);
  }
else if(c>b)
  {
   *large=c;
printf("%d is the largest",*large);
  }
else
  {
printf("All are equal\n");
  }
}
void main()
{
int large1,a2,b2,c2,x,y,z;
  x=input();
  y=input();
  z=input();
  a2=cmp(x,y,z);
printf("%d is the largest\n",a2);
input1(&a2,&b2,&c2);
cmp1(a2,b2,c2,&large1);
}
 