#include<stdio.h>
void sum(void)
{
    int a,b;
    printf("enter no.1=");
    scanf("%d",&a);
    printf("eneter b:");
    scanf("%d",&b);
    int v=a+b;
    printf("sum of a and b is=%d",v);
}
int main()
{
    sum();
    return 0;
}