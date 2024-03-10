#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    puts("enter the string: ");
    gets(str);

    int i,words=1;
    while(str[i]!='\0')
    {
        if(str[i]=' '||str[i]!='\n'||str[i]!='\t')
        {
            words++;
        }
        i++;
    }
    printf("total words=%d",words);
    return 0;
}