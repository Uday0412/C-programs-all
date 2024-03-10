#include<stdio.h>
struct student{
    char name[15];
    int id;
    float marks;
};
int main()
{
    struct student s1,s2,s3;
    int dummy;
    printf("enter the name,id,marks of student1:");
    scanf("%d %f %s",&s1.id,&s1.marks,&s1.name);
    scanf("%c",&dummy);

    printf("enetr the name ,id,marks of student2: ");
    scanf("%s %d %f",&s2.name,&s2.id,&s2.marks);
    scanf("%c",&dummy);

    printf("enetr the name ,id,marks of student3: ");
    scanf("%s %d %f",&s3.name,&s3.id,&s3.marks);
    scanf("%c",&dummy);

    printf("print the details:");
    printf("\n");

    printf("name=%s\n id=%d\n marks=%f",s1.name,s1.id,s1.marks);
    printf("name=%s \nid=%d \nmarks=%f",s2.name,s2.id,s2.marks);
    printf("name=%s\n id=%d\n marks=%f",s3.name,s3.id,s3.marks);

    return 0;

}