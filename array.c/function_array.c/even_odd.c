#include<stdio.h>
int result(int arr[])
{
    arr[0];
    printf("enter the number: ");
    scanf("%d",&arr[0]);
    if(arr[0]%2==0)
    {
        printf("even number");
    }
    else{
        printf("odd number");
    }
}
int main()
{
    int arr[0];
    result(arr);
    return 0;
} 