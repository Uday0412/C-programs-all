#include<stdio.h>
struct organisation
{
    char organisation_name[20];
    char org_number[20];

    struct employe
    {
        int employe_id;
        char name[20];
        int salary;
    };
};
int main()
{
    struct organisation org;
    printf("%d",sizeof(org));
    return 0;    
}