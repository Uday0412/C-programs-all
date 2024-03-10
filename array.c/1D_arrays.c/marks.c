#include<stdio.h>
int main()
{
    int marks[2],i;
    for(i=0;i<=2;i++)
    {
        printf("enetr the marks: ");
        scanf("%d",&marks[i]);
    }
    if(marks[i]>35){
    printf("%d",i);
    }
    return 0;
}