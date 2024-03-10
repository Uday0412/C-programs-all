#include<stdio.h>
#include<string.h>
int main()
{
    char* str1="collage wallah";
    char* str2=str1;
    str1[0]='M';
    puts(str2);
    printf("%s",str2);
    return 0;
}