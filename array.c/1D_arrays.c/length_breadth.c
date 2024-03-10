#include<stdio.h>
int main()
{
   float area,perimeter;
   int arr[0];
   printf("enetr the value of length: ");
   scanf("%d",&arr[0]);
   int brr[1];
   printf("enetr the width: ");
   scanf("%d",&brr[1]);

   area=arr[0]*brr[1];

   printf("\narea=%f",area);

   perimeter=2*arr[0]*brr[1];

   printf("\nperimeter=%f\n",perimeter);

   if(area > perimeter)
   printf("area is greater than perimeter\n");
   else if(perimeter > area)
   printf("perimeter is greater than area\n");
   else
   printf("both are equal");

   return 0;
}