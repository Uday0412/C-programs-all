#include<stdio.h>
int main()
{
    int i,j;
    int r;
    printf("enetr the rows: ");
    scanf("%d",&r);
    int c;
    printf("enetr the columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("the sum of matrix is : %d",sum);
    return 0;
}