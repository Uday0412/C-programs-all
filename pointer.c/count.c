#include<stdio.h>
void count(int *c,int *n)
{ 
     *c=0;
    while(n!=0)
    {
        *n= *n/10;
        *c++;

    }
}
int main()
{
    int n,c;
    printf("enter the numebr :");
    scanf("%d",&n);
    count(&c,&n);
    printf("the factorial is =%d",n);
    return 0;
}