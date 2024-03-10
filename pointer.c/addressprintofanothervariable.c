#include<stdio.h>
int main()
{
    int a=5;
    int *x=&a;
    printf("\nthe address of a is=%d",&a);
    printf("\nthe address of x is=%p",&x);
    printf("\nthe value of x is=%d",*x);
    return 0;
}