#include<stdio.h>
float area(float arr[])
{
    float area;
    for(int i=0;i<1;i++)
    {
        area=arr[0]*arr[1]*arr[1];
    }
    printf("%f",area);
}
int main()
{
    float arr[2]={3.14,9};
    area(arr);
    return 0;
}