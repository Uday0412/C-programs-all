#include<stdio.h>
int main()
{
   int m;
   printf("enter the rows: ");
   scanf("%d",&m);
   int n;
   printf("enter the colmun nu. :");
   scanf("%d",&n);
   printf("enter the elements: ");
   int arr[m][n];
   for(int i=0;i<m;i++)
   {
      for(int j=0;j<n;j++)
      {
        scanf("%d",&arr[i][j]);
      }
   }
   // wave
      printf("the wave of matrix is: ");

   printf("\n");
   for(int i=0;i<m;i++)
   {
    if(i%2==0)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
    }
    else
    {
        for(int j=n-1;j>=0;j--)
        {
            printf("%d ",arr[i][j]);
        }
    }
    printf("\n");
   }
    return 0;
}