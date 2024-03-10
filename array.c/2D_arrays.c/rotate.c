#include<stdio.h>
int main()
{
    int n;
    printf("enetr the rows: ");
    scanf("%d",&n);
    printf("enetr the element: ");
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }    

    //transpose
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }                                                  
    }

    //rotate

    for(int i=0;i<n;i++)
    {
        int j=0;
        int k=n-1;
        while(j<k)
        {
            int temp=arr[i][k];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
        }
        printf("\n");
    }

    //output

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           printf("%d",arr[i][j]);
        }
    }    
    return 0;
}