#include<stdio.h>
int year(n)
{
    if(n%4==0)
    {
        printf("leep year");
    }
    else
    {
        printf("not a leep year");
    }
}
int main()
{
    int n;
    printf("enetr the numebr :");
    scanf("%d",&n);
    year(n);
    printf("%d",n);
    return 0;
}


