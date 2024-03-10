#include<stdio.h>
void fact(int n,int *f)
{
    for(int i=1;i<=n;i++)
    {
        *f=*f*i;
    }
    
}
int main()
{
    int n,f=1;
    printf("enter the number of n=");
    scanf("%d",&n);
    fact(n,&f);
    printf("the factorial of b is =%d",f);
    return 0;
}