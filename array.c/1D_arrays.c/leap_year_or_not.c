#include<stdio.h>
int main()
{
    int arr[0];
    printf("enter the number: ");
    scanf("%d",&arr[0]);
    if(arr[0]%4==0)
    {
        printf("leap year");
    }
    else{
        printf("not a leep year");
    }

    return 0;
} 