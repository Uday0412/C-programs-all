#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the numerb : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=1;
        for(j=1;j<=i;j++)
        {
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}