#include<stdio.h>
int sum(int arr[])
{
    int sum=0;
    for(int i=0;i<=4;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);

}
int main()
{ 
    int arr[5]={1,2,3,4,5};
    sum(arr);
    return 0;
}