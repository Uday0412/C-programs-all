#include<stdio.h>
int main()
{
    char a;
    int x;
    float p,q;
    a='A';
    x=125;
    p=10.45;
    q=67.90;
    printf("%c is stored at addr %u\n",a,&a);
    printf("%d is stored at addr %u\n",x,&x);
    printf("%f is stored at addr %u\n",p,&p);
    printf("%f is stored at addr %u\n",q,&q);
    return 0;

}