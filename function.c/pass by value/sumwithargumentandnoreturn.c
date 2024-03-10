#include<stdio.h>
void sum(int a,int b)
{
    
    printf("enter no.1=");
    scanf("%d",&a);
    printf("eneter b:");
    scanf("%d",&b);
    int v=a+b;
    printf("sum of a and b is=%d",v);
}
int main()
{
    int a,b;
    sum(a,b);
    return 0;
}