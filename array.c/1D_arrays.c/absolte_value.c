#include<stdio.h>
int main()
{
   int arr[0];
   printf("enter the number: ");
   scanf("%d",&arr[0]);
   if(arr[0]<0)
   {
        arr[0]=arr[0] * (-1);
   }
   
   printf("the absolute value is =%d",arr[0]);
   return 0;
} 