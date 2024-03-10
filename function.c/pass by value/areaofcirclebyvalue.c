#include<stdio.h>
float area(float radius)
{
    int pi=3.14;
    float v=pi*radius*radius;
    return v;
    
}
int main()
{
    float radius;
    printf("enetr the radius:");
    scanf("%f",&radius);
     float u=area(radius);
    printf(" the area of circle=%f",u);
    return 0;
}

