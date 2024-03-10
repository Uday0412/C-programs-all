#include<stdio.h>
int main()
{
    int sp;
    printf("enetr the numebr :");
    scanf("%d",&sp);
    int cp;
    printf("enter the number :");
    scanf("%d",&cp);
    if(sp>cp)
    printf("profit");
    if(sp<cp)
    printf("loss");
    if(cp==sp)
    printf("no loss and no profit");
    return 0;
}