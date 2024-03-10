#include<stdio.h>
int max(int arr[])
{
    int max=arr[0];
    for(int i=0;i<=6;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
}
int main()
{
    
    int arr[7]={34,44,55,33,66,88,99};
    max(arr);
    printf("the greatest number in elements is =%d",max(arr));
    return 0;
}