#include<stdio.h>
#include<math.h>
int main()
{
    int n,num=0,digits;

    printf("input digit :");
    scanf("%d",&n);

    digits=(int)log10(n);

    while(n!=0)
    {
      num=(num*10)+(n%10);
      n/=10;
    }

    digits=digits-((int)log10(num));

    while(num!=0)
    {
    switch(num%10)
     {
        case 0:
        printf("zero ");
        break;

        case 1:
        printf("one ");
        break;

        case 2:
        printf("two ");
        break;

        case 3:
        printf("three ");
        break;

        case 4:
        printf("four ");
        break;

        case 5:
        printf("five ");
        break;

        case 6:
        printf("six ");
        break;

        case 7:
        printf("seven ");
        break;

        case 8:
        printf("eight ");
        break;

        case 9:
        printf("nine ");
        break;
      }
         num/=10;
   }
      while(digits)
         {
            printf("zero");
            digits;
         } 

   return 0;

}
     