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
   for(int j=0;j<n;j++)
   {
    if(j%2==0)
    {
        for(int i=m-1;j<0;i++)
        {
            printf("%d ",arr[i][j]);
        }
    }
    else
    {
        for(int i=0;i<m-1;i++)
        {
            printf("%d ",arr[i][j]);
        }
    }
    printf("\n");
   }
    return 0;
}   