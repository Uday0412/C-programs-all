#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct crickte
    {
        char name[15];
        int age;
        int number_of_maches;
        float average;
    }cricketer;

    cricketer arr[3];

    for(int i=0;i<3;i++)
    {
        scanf("%s",&arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].number_of_maches);
        scanf("%f",&arr[i].average);
    }

    for(int i=0;i<3;i++)
    {
        printf("name of player=%s\n\n",arr[i].name);
        printf("age of player=%d\n\n",arr[i].age);
        printf("number of maches=%d\n\n",arr[i].number_of_maches);
        printf("average of player=%f\n\n",arr[i].average);
    }
    return 0;
}