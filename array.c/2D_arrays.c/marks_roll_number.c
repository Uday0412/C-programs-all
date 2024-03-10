#include<stdio.h>
int main()
{
    int rollnumber[10],names[10],marks[10];
    for(int i=0;i<10;i++)
    {
        printf("enetr the roolnumebr:");
        scanf("%d",&rollnumber);
        printf("enetr the names: ");
        scanf("%d",&names);
        printf("enetr the marks: ");
        scanf("%d",&marks);
    }
    for(int i=0;i<10;i++)
    {
        printf("names:%d rollnumber:%d marks:%d");
    }
    return 0;
}