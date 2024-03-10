#include<stdio.h>
void pintline(char c);
void value(float ,float,int);
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
     int z;
    printline('z');
    value(principal,inrate,period);
    printline('c');
}
void printline(char ch)
{
    int i;
    for(i=1;i<=52;i++)
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
    printf("%f\t%f\t%d\t%f\n",p,r,n,sum);
}



