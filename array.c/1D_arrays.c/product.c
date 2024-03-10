#include<stdio.h>
int main()
{
    int n,i,product=1;
    printf("ente rthe numebr : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        product=product*arr[i];
    }
    printf("%d",product);
    return 0;
}