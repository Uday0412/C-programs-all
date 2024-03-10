#include<stdio.h>
int perfect()
{
    
    int number,i,result=0;

    printf("enetr the number :");
    scanf("%d",&number);

    for(int i=1;i<=number;i++)
    {
           if(number%i==0)
           {
            result=result+i;
           }
    }

    if(result==2*number)
    printf(" perfect number");
    else
    printf("  no  perfect numebr");
}
int main()
{
    int n;
    int v=perfect(n);
    return 0;
}