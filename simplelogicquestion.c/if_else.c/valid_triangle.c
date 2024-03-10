#include<stdio.h>
int main()
{
    int a,b,c;
        printf("enetr the number:");
        scanf("%d %d %d",&a,&b,&c);

    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("valid triangle");
    }
    else
    {
        printf("not a valid triangle");
    }
    return 0;
}