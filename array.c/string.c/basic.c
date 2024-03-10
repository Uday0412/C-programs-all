#include<stdio.h>
int main()
{
    char arr[7]={'h','e','l','l','o','w','\0'};
    for(int i=0;i<6;i++)
    {
        printf("\n\n%c-",arr[i]);
         printf(" the ASCII  value is =%d ",arr[i]);
         printf("\n\nthe address is=%p",&arr[i]);
    }
    return 0;
}