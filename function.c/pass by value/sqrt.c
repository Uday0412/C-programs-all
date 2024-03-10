#include<stdio.h>
#include<math.h>
float square(float n)
{   
    float s=n*n;
    return s;
}
int main()
{
    float n,v;
    printf("enetr the numebr n =");
    scanf("%f",&n);
    v=square(n);
    printf("the square of n is=%f",v);
    return 0;
}