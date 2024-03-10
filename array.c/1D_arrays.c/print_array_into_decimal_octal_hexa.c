#include<stdio.h>
int main()
{
  unsigned char arr1[]={10,20,30,40,50};
  unsigned char arr2[]={010,077,023,045,057};
  unsigned char arr3[]={0x10,0xAA,0x67,0xA1,0xFF};
  
  int i;
  printf("enter the number: ");
  for(i=0;i<5;i++)
  printf("%d ",arr1[i]);
  printf("\n");
  printf("enter the arr2[]");
  for(i=0;i<5;i++)
  printf("%o ",arr2[i]);
  printf("\n");
  printf("enter the arr3[]");
  for(i=0;i<5;i++)
  printf("%x ",arr3[i]);
  printf("\n");
  return 0;
}