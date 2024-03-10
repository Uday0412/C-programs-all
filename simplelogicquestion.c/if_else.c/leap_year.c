#include<stdio.h>
int main()
{
    int n;
    printf("enetr the number : ");
    scanf("%d",&n);
    if(n%4==0)
    printf("leap year");
    if(n%4!=0)
    printf("not a leap year");
    return 0;
}