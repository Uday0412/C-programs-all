#include<stdio.h>
#include<string.h>
struct collage
{
    char collage_name[20];
    int ranking;

    struct student
    {
        int student_id;
        char name[20];
        int roll_no;
    }student1;
};
int main()
{
struct collage c1={"greeks of greeks",7,111,"uday",06};
printf("collag name:%s\n",c1.collage_name);
printf("ranking: %d\n",c1.student1.student_id);
printf("student name: %s\n",c1.student1.name);
printf("roll number: %d\n",c1.student1.roll_no);
return 0;
}