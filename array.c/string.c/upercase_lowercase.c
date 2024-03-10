#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    puts("enter the string; ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    printf("upercase string is=%s",str);
    return 0;
}