#include<stdio.h>
int main()
{
    float l;
    printf("enetr the length: ");
    scanf("%f",&l);
    float b;
    printf("enetr the breadth : ");
    scanf("%f",&b);
    float area=l*b;
    printf("area=%f\n",area);
    float perimeter =2*(l+b);
    printf("perimeter=%f\n",perimeter);
    if(area>perimeter)
    printf("area is biggest\n");
    else if(area<perimeter)
    printf("perimter is biggest\n");
    else
    printf("both area equal");
    return 0;
}