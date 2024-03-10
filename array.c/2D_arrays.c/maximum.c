#include<stdio.h>
int main()
{
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,2,3,4},{4,5,6,7}};
    int maxcount=0;
    for(int i=0;i<3;i++)
    {
        int count=0;
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]=count++);
        }
        if(maxcount<count)
        {
            maxcount=count;
        }
        printf("\n");
    }
    printf("%d",maxcount);
    return 0;
}