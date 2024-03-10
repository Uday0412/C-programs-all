#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    puts("enetr the str:");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("lowercase string is:%s ",str);
    return 0;
}
