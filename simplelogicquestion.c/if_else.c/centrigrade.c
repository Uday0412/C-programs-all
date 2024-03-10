#include<stdio.h>
int main()
{
    float centrigrade,temp;
    printf("enter the value in tenp=");
    scanf("%f",&temp);

    
    if(temp<0)
    {
        printf("freezing weather");
    }
    else if(temp==0 && temp<=10)
    {
        printf("very cold");
    }
    else if(temp==10 && 10<=20 )
    {
        printf("cold weather");
    }
    else if(temp==20 && 20<=30)
    {
        printf("normal temperature");
    }
    else if(temp==30 && 30<=40)
    {
        printf("hot weather");
    }
    else
    {
        printf("very hot");
    }
    return 0;
}
