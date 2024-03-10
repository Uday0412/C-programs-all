#include<stdio.h>
int addr(int arr[])
{
 for(int i=0;i<5;i++)
    {
        printf("%p\n",&arr[i]);
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    addr(arr);
    return 0;
}