#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enetr the numebr :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==1)||(i==2&&j!=2&&j!=3&j!=4)||(i==3&&j!=2&&j!=3&j!=4)||(i==4&&j!=2&&j!=3&j!=4)|(i==5))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}