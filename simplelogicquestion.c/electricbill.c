#include<stdio.h>
int main()
{
    float appliances,electricscost,appliences_uses,time;
    printf("enetr appliances charge = ");
    scanf("%f",&appliances);

    printf("enter appliences uses= ");
    scanf("%f",&appliences_uses);

    printf("enetr the time=");
    scanf("%f",&time);

    electricscost= appliances*appliences_uses*time;
    printf("\nelectric cost =%f",electricscost);

    if(electricscost==50)
    {
        printf("\nelectric charge=0.50rs per unit");
    }
    else if(electricscost==51 && 51<=100)
    {
        printf("\nelectric charge=0.75rs per unit");
    }
    else if (electricscost==100 && 100<=200)
    {
        printf("\nelectric charge=1.20rs per unit");
    }
    else{
        printf("\nelectric charge=1.50rs per unit");
    }
    return 0;
    
     
    
}