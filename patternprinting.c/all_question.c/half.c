#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1)||(i==2&&j!=5)||(i==3&&j!=4&&j!=5)||(i==4&&j!=3&&j!=4&&j!=5))
            printf("*");
            if((i==5&&j!=3&&j!=4&&j!=5)||(i==6&&j!=4&&j!=5))
            printf("*");
            if((i==7&&j!=5)||(i==8))
            printf("* ");
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}