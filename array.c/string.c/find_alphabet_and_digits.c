#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    puts("enter the string: ");
    gets(str);
    int alphabet,digits,others,i;

    alphabet=digits=others=i=0;

    while(str[i]!='\0')
    {
        if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='z') )
        {
            alphabet++;
        }
        else if((str[i]>='0')&&(str[i]<='9'))
        {
            digits++;
        }
        else{
            others++;
        }
        i++;
    }
    printf("alphabet=%d\n",alphabet);
    printf("digits=%d\n",digits);
    printf("others=%d",others);
    return 0;
}