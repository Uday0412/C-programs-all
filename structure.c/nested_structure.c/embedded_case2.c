#include<stdio.h>
#include<string.h>
struct organisation
{
    char organisation_name[20];
    char org_number[20];

    struct employee
 {
     int employe_id;
     char name[20];
     int salayry;
  }emp;
};
int main()
{
    struct organisation org;
    printf("the size of structre organisation:%d\n ",sizeof(org));
    org.emp.employe_id=101;
    org.emp.salayry=400000;
    strcpy(org.emp.name,"uday kushwaha");
    strcpy(org.organisation_name,"geeksforgreeks");
    strcpy(org.org_number,"h74h4736bdkj8");

    printf("organisation name=%s\n",org.organisation_name);
    printf("organisation number=%s\n",org.org_number);
    printf("employe name=%s\n",org.emp.name);
    printf("employe id=%d\n",org.emp.employe_id);
    printf("employe salary=%d\n",org.emp.salayry);

    printf("\n");
    int arr;
    printf("the size of array is =%d ",sizeof(struct));

    return 0;
}