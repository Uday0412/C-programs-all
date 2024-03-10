#include<stdio.h>
int predict()
{
     int i,j,k,l;
    float a,b;
    printf("enter the number i : ");
    scanf("%d",&i);
    printf("enetr the numebr j : ");
    scanf("%d",&j);
    k=(i/j)* j;
    l=(j/i)*i;
    a=(i/j)*j;
    b=(j/i)*i;

printf("%d \n %d\n %f\n %f",k,l,a,b);
    return k,l,a,b;
}
int main()
{
   
    int v=predict();
    
    return 0;
}