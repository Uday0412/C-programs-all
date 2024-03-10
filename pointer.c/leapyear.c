#include<stdio.h>
float year(int *n)
{
    if(*n%4==0)
    {
        printf("leap year");
    }
    else{
        printf("not a leap year");
    }
}
int main()
{
    int n;
    printf("enetr the number n:");
    scanf("%d",&n);
    year(&n);
    
    return 0;
}