#include<stdio.h>
int main()
{
    int n;
    printf("enter the elements:");
    scanf("%d",&n);
    int x;
    printf("enetr the x=");
    scanf("%d",&x);
    int arr[n];
    int totalpair=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                totalpair++;
                printf("(%d,%d)",arr[i],arr[j]);
            }
        }
    }
    printf("%d",totalpair);
    return 0;
}