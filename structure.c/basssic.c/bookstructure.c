#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char name[50];
        int numberofpages;
        float prices;
    }a,b,c;

    a.numberofpages=100;
    a.prices=400;
    strcpy(a.name,"bhagwat geta");

    printf("the number of pages are :%d\n",a.numberofpages);
    printf("the price is :%f\n",a.prices);
    printf("the name of book: %s\n",a.name);

    return 0;
    
}