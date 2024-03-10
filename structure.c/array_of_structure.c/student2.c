#include<stdio.h>
#include<string.h>
struct  student{
    char name[50];
    int roll_number;
    int class;
    char section;
};
int main()
{
    struct  student s[2];
    for(int i=0;i<2;i++)
     {
        printf("enter name of studenti=\n",i+1);
        scanf("%s",&s[i].name);
        printf("enter the roll number=\n");
        scanf("%d",&s[i].roll_number);
        printf("enetr the class of student=\n");
        scanf("%d",&s[i].class);
        printf("enter the section of student=\n");
        scanf("%s",&s[i].section);
        
     } 
     printf("\n");
     
     for(int i=0;i<2;i++)
     {
        printf("name of student:%s\n",s[i].name);
        printf("roll number of student:%d\n",s[i].roll_number);
        printf("class of student=%d\n",s[i].class);
        printf("section of student=%c\n",s[i].section);
        for(int i=1;i<2;i++)
        {
            printf("\n");
        }
     }
     return 0;
}
