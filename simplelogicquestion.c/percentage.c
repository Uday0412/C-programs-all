#include<stdio.h>
#include<math.h>
int main()
{
    float physics,chemistry,biology,mathematics,computer;
    printf("enetr the marks if physics=");
    scanf("%f",&physics);

    printf("enetr the marks if chemistry=");
    scanf("%f",&chemistry);

     printf("enetr the marks if biology=");
     scanf("%f",&biology);

     printf("enetr the marks if mathematics=");
     scanf("%f",&mathematics);

     printf("enetr the marks if computer=");
     scanf("%f",&computer);

     float v=(physics+chemistry+biology+mathematics+computer)/5;
     printf("percentage=%f",v);
     
     if(v>=90)
     {
        printf("\nGRADE A");
     }
     else if(v>=80)
     {
        printf("\ngrade b");
     }
     else if(v>=70)
     {
        printf("\ngrade c");
     }
     else if(v>=60)
     {
        printf("\ngrade d");
     }
     else if(v<40)
     {
        printf("\nvery poor");
     }

     return 0;
    
}