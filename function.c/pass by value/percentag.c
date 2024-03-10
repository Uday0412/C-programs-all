#include<stdio.h>
float percentage(float m1,float m2,float m3,float m4,float m5,float m6)
{
    return (m1+m2+m3+m4+m5+m6)/6;
}
int main()
{
    float m1,m2,m3,m4,m5,m6,p;
    printf("enter the number m1:");
    scanf("%f",&m1);
    printf("enetr the number m2:");
    scanf("%f",&m2);
    printf("enter the number m3:");
    scanf("%f",&m3);
    printf("enter the numebr m4:");
    scanf("%f",&m4);
    printf("enetr the number m5:");
    scanf("%f",m5);
    printf("enetr the number m6:");
    scanf("%f",&m6);
    p=percentage(m1,m2,m3,m4,m5,m6);
    printf("%f",p);
    return 0;
}