#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enetr the numerb : ");
    scanf("%d",&a);
    printf("enetr the nueber: ");
    scanf("%d",&b);
    printf("enter the number : ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("a is bigger");
    }
    else if(b>a && b>c)
    {
        printf("b is bigger ");
    }
    else
    {
        printf("c is bigger ");
    }
    return 0;
}