#include<stdio.h>
struct student
{
    char name[15];
    int roll;
    float marks[5];
};
int main()
{
    struct student s;
    int i;
    float sum=0,p;

    printf("enter the name and rollnumber: ");
    scanf("%s %d",s.name,s.roll);
    printf("enetr the marks obtined: \n");
    for(int i=0;i<5;i++)
    {
        printf("enter marks:");
        scanf("%f",&s.marks);
        sum=sum+s.marks[i];
    }
    p=sum/5;
    
    printf("student record and percentage:\n ");
    printf("name=%s\n",s.name);
    printf("roll number=%d\n",s.roll);
    printf("percentage=%f",p);
    return 0;
}
