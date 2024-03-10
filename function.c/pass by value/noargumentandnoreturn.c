#include<stdio.h>
void pintline(void);
void value(void);
int main()
{
    printline();
    value();
    printline();
}
void printline(void)
{
    int i;
    for(i=1;i<=52;i++)
    printf("%c",'-');
    printf("\n");
}
void value(void)
{
  float principal,inrate,sum;
    int year,period;

    printf("enter principal amount:");
    scanf("%f",&principal);
    printf("enter rate :");
    scanf("%f",&inrate);
    printf("enter period");
    scanf("%d",&period);
     sum=principal;
     year=1;
     while(year<=principal)
     {
        sum=sum*(1+inrate);
        year=year+1;
     }
     printf("\n %8.2f %5.2f %5d %12.2f\n",principal,inrate,period,sum);
}



