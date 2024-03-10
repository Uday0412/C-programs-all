

#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);
int main()
{
    int a,b;
    int sum,diff,prod,divi;
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    diff=sub(a,b);
    prod=mul(a,b);
    divi=div(a,b);
    printf("%d,%d,%d,%d",sum,diff,prod,divi);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
float divi(int a,int b)
{
    return a/b; 
}