#include<stdio.h>
void swap(int* x,int* y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main()
{
    int a,b;
    printf("enter the number a:");
    scanf("%d",&a);
    printf("enter the numebr b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("the value of a=%d\n",a);
    printf("the value of b is =%d",b);
    return 0;

}
