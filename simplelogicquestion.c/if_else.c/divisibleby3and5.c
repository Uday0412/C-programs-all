#include<stdio.h>
int main()
{
    int n;
    printf("enetr teh value=");
    scanf("%f",&n);
    if(n%5==0 || n%3!=0)
    printf("np. is divisible by 3 and 5");
    else
    printf("not divisible");
    return 0;

}