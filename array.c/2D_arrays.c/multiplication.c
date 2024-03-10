#include<stdio.h>
int main()
{
    // creating first matrix
    int m;
    printf("enter the row of 1st matrix:  ");
    scanf("%d",&m);
    int n;
    printf("enter the column of 1st matrix: ");
    scanf("%d",&n);
    printf("enter the element: ");
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    // creating second matrix

    int p;
    printf("enter the row of 2nd matrix: ");
    scanf("%d",&p);
    int q;
    printf("enter the column of 2nd matrix: ");
    scanf("%d",&q);
    printf("enter the elements : ");
    int brr[p][q];
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }

    //check

    if(n!=p)
    {
        printf("the matrix is connot multiplied \n");
    }
    else
    {
        int res[m][q];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                res[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    res[i][j]+= arr[i][k]*brr[k][j];
                }
            }
        }

        //print
        printf("the result of multiplication of given matrix is given bolow: \n");
        printf("\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}