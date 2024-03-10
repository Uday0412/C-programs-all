#include<stdio.h>
#include<string.h>
int main()
{
    struct person{
        char name[20];
        int age;
        float salary;
    };
    struct person employe1;
    employe1.age=30;
    employe1.salary=30000;
    strcpy(employe1.name,"uday kushwaha");

    printf("the name of the employe1=%s\n",employe1.name);

    struct person employe2;
    employe2.age=30;
    employe2.salary=30000;
    strcpy(employe2.name,"utkarsh mishra");

    printf("the age of the employe2=%d\n",employe2.age);
   
   return 0;
}