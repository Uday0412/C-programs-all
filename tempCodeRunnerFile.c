#include<stdio.h>
int  sum(int a,int b)
{
    int c;
    c = a+b;
    return c;
}
int main()
{
    int a,b,c;
    printf("enter the number first :");
    scanf("%d",&a);
    printf("ebter the second number: ");
    scanf("%d",&b);
     c= sum(a,b);
    printf("answer is =%d",c);
    return 0;
}