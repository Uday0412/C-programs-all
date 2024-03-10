#include<stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int totalpairs=0;
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            for(int k=i+2;k<7;k++)
            {
                if(arr[i]+arr[j]+arr[k]==8)
                {
                    totalpairs++;
                    printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",totalpairs);
    return 0;
}