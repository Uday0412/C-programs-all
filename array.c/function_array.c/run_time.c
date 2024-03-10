#include<stdio.h>
int main()
{
    int nums[5];
    printf("\n rum time inilization example:\n");
    printf("\n enter array elemnts: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("accessing array elements after dynamic inilization: ");
    for(int i=0;i<5;i++)
    {
        printf("%d",nums[i]);
    }
    return 0;
}