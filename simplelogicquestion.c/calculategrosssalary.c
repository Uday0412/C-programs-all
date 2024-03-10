#include<stdio.h>
int main()
{
    float basic,da,hra,gross_salary;
    printf("enetr the basic salary = ");
    scanf("%f",&basic);

    if (basic<=10000)
    {
        da=(basic*20)/100;
        hra=(basic*80)/100;
    }

    else if(basic==10001 && 10001<=20000)
    {
        da=(basic*90)/100;
        hra=(basic*25)/100;
    }
    else{
        da=(basic*95)/100;
        hra=(basic*30)/100;
    }

    gross_salary=basic+da+hra;
    printf("gross_salary=%f",gross_salary);
    return 0;
}