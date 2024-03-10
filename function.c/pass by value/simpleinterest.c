#include<stdio.h>
float simpleinterst(float p,float r,float t)
{
    return (p*r*t)/100;
}
int main()
{
   float p,r,t,si;
   printf("enter the number p:");
   scanf("%f",&p);
   printf("enetr the number r:");
   scanf("%f",&r);
   printf("enetr the numnber t:");
   scanf("%f",&t);
   si=simpleinterst(p,r,t);
   printf("%f",si);
   return 0;   
}