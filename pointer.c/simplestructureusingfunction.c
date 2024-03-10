#include<stdio.h>
void simple(void )
{
   int a;
   printf("the addres of a is =%p",&a);
}
int main()
{
    int a;
    simple();
    return 0;
}