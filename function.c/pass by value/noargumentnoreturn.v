#include<stdio.h>
void printline(void);
void value(void);
void main()
{
    printline();
    value();
    printline();
}
void printline(void)
{
    int i;
    for(i=1;i<=35;i++)
    printf("%c",'-');
    printf("\n");
}
void value(void)
{
    int year,p;
    float inrate,sum,principal;

    printf("principal amount:");
    scanf("%d",&principal);
    printf("interest rate");
    scanf("%f",&inrate);
    printf("period");
    scanf("%d",&p);

    sum=principal;
    year=1;
    while(year<=p)
    {
        sum=sum*(1+inrate);
        year=year+1;
    }
    printf("\n %8.2f %5.2f %5d %2.5f\n",principal,inrate,p,sum);
}    

-----------------------------------------------------------------------------------------------------------

#include<stdio.h>
void pintline(char c)
void value(float ,float,int)
int main()
{
    float principal,inrate;
    int period;

    printf("enter principal amount:");
    scanf("%f",&principal);
    printf("enter rate :");
    scanf("%f",&inrate);
    printf("enter period");
    scanf("%d",&period);

    printline(z);
    value(principal,inrate,period);
    printline(c);
}
void printline(char c)
{
    int i;
    for(i=1;i<=54;i++)
    printf("%c",ch);
    printf("\n");
}
void value(float p,float r,int n)
{
    int year;
    float sum;
    sum=p;
    year=1;
    while(year<=n)
    {
        sum=sum*(1+r);
        year=year+1;
    }
    printf("%f\t%f\t%d\t%f",p,r,n,sum);
}

-----------------------------------------------------------------------------------------------------------




