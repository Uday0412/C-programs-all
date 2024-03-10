#include<stdio.h>
int main()
{
    int x,y;
    int *ptr;
    x=10;
    ptr=&x;
    y=*ptr;
    printf("value of x is %d\n\n",x);
    printf("%d is stored at addre %u\n",x,&x);
    printf("%d is stored at addr %u\n",*&x,&x);
    printf("%d is stored at addr %u\n",*ptr,ptr);
    printf("%d is stored at addr %u\n",ptr,&ptr);
    printf("the addr of y is %u\n",&y);
    printf("%d is strored at addr %u\n",y,&y);
    *ptr=25;
    printf("\n now x=%d\n",x);
    printf("%d is stored at addr of y is %u\n",*ptr,&y);
    printf("the value of y is %d\n",x);
    printf("the value of ptr is %d",x);
    return 0;
}