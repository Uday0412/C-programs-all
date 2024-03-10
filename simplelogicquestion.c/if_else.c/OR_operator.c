#include<stdio.h>
int main()
{
    int n;
    printf("enetr the numebr : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0)
    printf("no. is divisile by 3 or 5");
    else
    printf("no. is not divisible by 3 or 5");
    return 0;
}