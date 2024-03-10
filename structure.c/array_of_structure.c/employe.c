#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int employe_id;
    int week_attendance[7];
};
int main()
{
    struct employee emp[5];
    for(int i=0;i<5;i++)
    {
        emp[i].employe_id=i;
        strcpy(emp[i].name,"uday kushwaha");
        int week;
        for(week=0;week<7;week++)
        {
            int attendence;
            emp[i].week_attendance[week];
        }   
     }
     printf("\n");
     for(int i=0;i<5;i++)
     {
        printf("employe id:%d - emplye name:%s\n",emp[i].employe_id,emp[i].name);
        printf("attendence\n");
        int week;
        for(week=0;week<7;week++)
        {
            printf("attendence=%d\n",emp[i].week_attendance);
        }
        printf("\n");
     }
     return 0;
}