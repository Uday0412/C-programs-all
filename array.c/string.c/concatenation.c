#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char first_name[10]={"uday"};
    char second_name[10]={"kushwaha"};
    char third_name[10]={"coder"};
    char name[30];
    for(i=0;first_name[i]!='\0';i++)
    {
        name[i]=first_name[i];
        name[i]=' ';
    }
    for(j=0;second_name[j]!='\0';j++)
    {
        name[i+j+1]=second_name[j];
        name[i+j+1]=' ';
    }
    for(k=0;third_name[k]!='\0';k++)
    {
        name[i+j+k+2]=third_name[i];
        name[i+j+k+2]= '\0';
    }
    printf("\n\n");
    printf("%s",name);
    return 0;

}