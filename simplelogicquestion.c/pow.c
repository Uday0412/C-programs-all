#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;

    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);

    int c=pow(a,b);

    printf("%d",c);
    
    return 0;
    
}