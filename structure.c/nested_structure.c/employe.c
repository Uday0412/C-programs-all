#include<stdio.h>
#include<string.h>
struct employe
{
    int employe_id;
    char name[20];
    int salary;
};
struct orgination
{
    struct employe emp;
    char orgination_name[30];
    char orgination_number[20];
};

int main()
{
    struct orgination org;
    
    printf("the size of organisation :%d\n",sizeof(org));
    org.emp.employe_id=101;
    strcpy(org.emp.name,"uday kushwaha");
    org.emp.salary=40000;
    strcpy(org.orgination_number,"g634hbdh78");

    printf("orgination name: %s\n",org.orgination_name);
    printf("organisation number=%s\n",org.orgination_number);
    printf("employe id=%d\n",org.emp.employe_id);
    printf("employe name=%s\n",org.emp.name);
    printf("salary=%d",org.emp.salary);
    return 0;
}
