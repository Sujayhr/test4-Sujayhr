#include<stdio.h>
int input_array_size()
{
    int a;
    printf("enter the size of array : ");
    scanf("%d",&a);
    return a;
}
void array_input(int n,int *a)
{
    printf("enter the values\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int sum_n_arrays(int n,int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];   
    }
    return sum;  
}
void output(int n, int a[n], int sum)
{
    int i;  
    for(i=0;i<n-1;i++)
    {
        printf("%d+",a[i]);
    }
    printf("%d is %d",a[i],sum);
}
int main()
{
    int n,sum;
    n=input_array_size();
    int a[n];
    array_input(n,a);
    sum=sum_n_arrays(n,a);
    output(n,a,sum);   
}