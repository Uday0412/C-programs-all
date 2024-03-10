#include<stdio.h>
int tripletspair(int arr[])
{
    int n;
    printf("enetr the value of n= ");
    scanf("%d",&n);
    int x;
    printf("Enter the value of x= ");
    scanf("%d",&n);
    int tripletspair;
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
                tripletspair++;
                printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
            }
        }
    }
    printf("%d",tripletspair);
}
int main()
{
    int n;
    int arr[n];
    tripletspair(arr);
    return 0;
}