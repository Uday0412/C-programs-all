#include<stdio.h>
int product(int arr[])
{
    int i,product=1;
    for(int i=0;i<=1;i++)
    {
        product=product*arr[i];
    }
      printf("%d",product);
}
int main()
{
   int arr[2]={1,2};
    product(arr);
    
    return 0;
}