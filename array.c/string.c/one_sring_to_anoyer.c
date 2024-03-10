#include<stdio.h>
#include<string.h>
int main()
{
    char string1[40],string2[40];
    int i;
    gets(string2);

    for(i=0;string2[i]!='\0';i++)
    string1[i]=string2[i];
    
    printf("\n");
    puts(string1);
    printf("number of character=%d\n",i);
    return 0;
}