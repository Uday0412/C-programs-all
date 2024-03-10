#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enetr the numebr : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=1;
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
            
                int d=a+64;
                a++;
                char ch=(char)d;
                printf("%c",ch);            
            }
            else
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}