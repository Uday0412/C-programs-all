#include<stdio.h>
int main()
{
    int i=0;
    char arr[]="uday kushwaha";
    while(arr[i]!='\0')
    {
        printf("\n\n%c-",arr[i]);
         printf(" the ASCII  value is =%d ",arr[i]);
         printf("\n\nthe address is=%p",&arr[i]);
         i++;
    }
    return 0;
}