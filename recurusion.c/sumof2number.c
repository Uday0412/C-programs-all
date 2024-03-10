#include<stdio.h>
int sum(int *a,int *b)
{ 
    int sum;
    return sum=*a+*b;
}
int main()
{
    int a,b;
    printf("enetr the numebr a= ");
    scanf("%d",&a);
    printf("enetr the nuember b=");
    scanf("%d",&b);
    int v=sum(&a,&b);
    printf("the sum of two numberis =%d",v);
    return 0;
}