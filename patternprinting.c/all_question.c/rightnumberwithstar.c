#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enetr the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",n);
        }
        printf(" * *");
        printf("\n");
    }
    return 0;
}