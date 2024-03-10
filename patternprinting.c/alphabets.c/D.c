#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            if((i==1&&j!=1&&j!=5)||(i==2&&j!=5)||(i==3&&j!=3&&j!=5)||(i==4&&j!=1&&j!=5)||(i==5&&j!=1&&j!=3&&j!=5))
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
