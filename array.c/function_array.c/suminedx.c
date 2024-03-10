#include<stdio.h>
void sumindex(int arr[])
{
    int n;
    printf("enetr the value of n: ");
    scanf("%d",&n);
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
    printf("the odd sum is =%d\n",oddsum);
    int result=evensum-oddsum;
    printf("result=%d",result);
}
int main()
{
    int n;
   int arr[n];
   sumindex(arr);
   return 0;
}