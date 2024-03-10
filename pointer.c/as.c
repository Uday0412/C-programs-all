#include<stdio.h>
int main()
{
    int y,sum,*p1,*p2;
    *p1=5;
    *p2=4;
    sum =5;
    printf("sum=%d",sum);
    y=*p1-*p2;
    printf("y=%d",y);
    sum=sum+*p1;
    printf("sum=%d",sum);
    *p2=*p2+10;
    printf("*ptr=%d",*p2);
    return 0;
}