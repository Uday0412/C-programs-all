#include<stdio.h>
float saller(float sp,float cp)
{
    printf("enetr the sp:");
    scanf("%f",&sp);
    printf("enter the cp:");
    scanf("%f",&cp);
    if(sp>cp)
    {
        printf("profit");
    }
    else if(cp>sp)
    {
        printf("loss");
    }
    else{
        printf("no loss and no profit");
    }
    
}
int main()
{
    float sp,cp;
    float v=saller(sp,cp);
    printf("%f",v);
    return 0;

}