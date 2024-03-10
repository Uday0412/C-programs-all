#include<stdio.h>
int add(int *x,int *y)
{
    int v;
    v=(*x+*y);
    return v;
}
int main()
{
    int a;
    printf("enter the number a:");
    scanf("%d",&a);
    int b;
    printf("enter th number b:");
    scanf("%d",&b);

    int f=add(&a,&b);

    printf("the sum of two number = %d",f);
    return 0;
}