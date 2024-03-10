#include<stdio.h>
int main()
{
    int x;
   int arr[2]={2,7};
   printf("(%d,%d)\n",arr[0],arr[1]);

   int temp=arr[0];
   arr[0]=arr[1];
   arr[1]=temp;

   printf("(%d,%d)",arr[0],arr[1]);
   return 0;
}