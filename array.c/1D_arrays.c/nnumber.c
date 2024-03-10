#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("ente the size of element: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of elements =%d",sum);
    return 0;
}