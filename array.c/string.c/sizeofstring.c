#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    puts("enter the string: ");
    gets(str);
    int size=0;
    int i=0;
    while(str[i]!='\0')
    {
        size++;
        i++;
    }
    printf("the length of string is :%d",size);
    return 0;
}