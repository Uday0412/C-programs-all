#include<stdio.h>
int main()
{
    int n;
    printf("enter the elements: ");
    scanf("%d",&n);
    int x;
    printf("enetr the value x: ");
    scanf("%d",&x);
    int arr[n];
    int totaltriplets;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    totaltriplets++;
                    printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",totaltriplets);
    return 0;
}