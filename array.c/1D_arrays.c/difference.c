#include<stdio.h>
int main()
{
    int n;
    printf("enetr the value of n: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the numebr: ",i+1);
        scanf("%d",&arr[i]);
    }
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            evensum+=arr[i];
        }
        else
        {
            oddsum+=arr[i];
        }
    }
    printf("the even sum is = %d\n",evensum);
    printf("the odd sum is =%d",oddsum);
    int result=evensum-oddsum;
    printf("\nresult=%d",result);
    return 0;
}