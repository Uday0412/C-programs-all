#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the no. of element: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n;i++)
    {
        printf("enter the element : ");
        scanf("%d",&arr[i]);
    }
    int max=arr[n];
    for(i=0;i<=n;i++)
    {
        if(max>arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;

}