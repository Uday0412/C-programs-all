#include<stdio.h>
int power(int a,int b)
{
    if(b==0)
    return 1;
    int recans=a*power(a,b-1);
    return recans;
}
int main()
{
    int a;
    printf("enetr the nuember a: ");
    scanf("%d",&a);
    int b;
    printf("enter the number b: ");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d",p);
    return 0;
}