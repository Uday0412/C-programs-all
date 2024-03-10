#include<stdio.h>
#include<string.h>
struct student{
    int roolno;
    char name[15];
} ;
int main()
{
    int i;
    struct  student st[3];
    printf("enetr records of students:");
    for(i=0;i<3;i++)
    {
        printf("\nenter the rollno: ");
        scanf("%d",&st[i].roolno);
        printf("enetr the name:");
        scanf("%s",&st[i].name);
    }
    printf("\n student information:");
    for(i=0;i<3;i++)
    {
        printf("\n rollno=%d ->name=%s",st[i].roolno,st[i].name);
    }
    return 0;
    
}