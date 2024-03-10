#include<stdio.h>
#include<string.h>
struct collage_detail
{
    int collage_id;
    char collag_name;
};
struct student_detail
{
    int student_id;
    char student_name[20];
    float cgpa;
    struct collage_detail clg;
}stu;

int main()
{
    struct student_detail stu = {12,"uday",6.6,{13284,"aks university"}};
    printf("collage id=%d\n",stu.clg.collage_id );
   // printf("collage name=%s\n",stu.clg.collage_name );
    printf("student name=%s\n",stu.student_name );
    printf("student id=%d\n",stu.student_id );
    printf("student cgpa=%f\n",stu.cgpa);


    return 0;
}