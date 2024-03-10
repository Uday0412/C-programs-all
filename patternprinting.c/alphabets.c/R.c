#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=4;j++)
        {
            if((i==1&&j!=4)||(i==2&&j!=2&&j!=3)||(i==3&&j!=2&&j!=4))
            {
                printf("*");
            }
            if((i==4&&j!=3&&j!=4)||(i==5&&j!=2&&j!=4)||(i==6&&j!=2&&j!=3))
            {
                printf("*");
            }
            if(i==7&&j!=2&&j!=3&&j!=4)
            {
            printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}