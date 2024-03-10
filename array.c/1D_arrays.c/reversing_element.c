#include<stdio.h>
int reverse(int arr[])
{
    int i=0;
    int j=6;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");

    reverse(arr);

    for(int i=0;i<=6;i++)
    {
        printf("%d\n",arr[i]);

    }
    return  0;
}