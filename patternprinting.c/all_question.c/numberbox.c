#include<stdio.h>
int main()
{
    int n,j,i;
    printf("enter the numer : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}