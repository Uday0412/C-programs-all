#include<stdio.h>
int main()
{
    int n;
    printf("enetr the numebr =");
    scanf("%d",&n);
    if(n<0)
    {
        n=n*(-1);
    }
    printf("absolute valueis =%d",n);
    return 0;

}