#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("enetr the number n");
    scanf("%d",&n);
    printf("enetr the numebr m");
    scanf("%d",&m);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if((i==1&&j!=2&&j!=3&&j!=4)||(i==2&&j!=2&&j!=3&&j!=4)||(i==3&&j!=2&&j!=3&&j!=4))
            {
                printf("*");
            }
            if((i==4&&j!=2&&j!=3&j!=4)||(i==5&&j!=1&&j!=5))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}