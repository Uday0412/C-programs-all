#include<stdio.h>
int main()
{
    int i,a=1;
    for(i=64;i<=127;i++)
    
    {
        for(int j=97;j<=122;j++)
        i=a+64;
        printf("%c ",i);
        a++;
    }
    return 0;
}