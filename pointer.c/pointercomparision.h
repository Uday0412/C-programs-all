#include<stdio.h>
int main()
{
    int n=10;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=arr;
    int count_even=0;
    int count_odd=0;
    for(int i=0;i<=n;i++)
    {
        if(*ptr%2==0)
            {
                count_even++;
            }
        else
            {
                count_odd++;
            }
            ptr++;
    }
    printf("%d",count_even);
    printf("%d",count_odd);
    return 0;
}