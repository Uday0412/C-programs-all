#include<stdio.h>
int main()
{
    int n1,n2;
    n1=36,n2=60;
    int min=(n1<n2)?n1:n2;
    int hcf;
    for(int i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    printf("hcf of %d and %d=%d\n",n1,n2,hcf);
    return 0;
}