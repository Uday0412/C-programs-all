#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int vow=0;
    int cons=0;
    int i=0;
    printf("enter the string: ");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        vow++;
        else
        cons++;
        i++;
   }
   printf("no. of vowles=%d",vow);
   printf("no. of consonent =%d",cons);
   return 0;
}