#include<stdio.h>
float average(float arr[])
{
    int i;
    float average;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
        average=(sum)/5;
    }
    printf("%f",average);
}
int main()
{
    float arr[5];
    average(arr);
    return 0;
}    