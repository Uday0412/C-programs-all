#include<stdio.h>
int main()
{
    int array1[5]={10,20,30,40,50};
    int array2[5];
    printf("copying one dimensional array in c:\n");
    printf("array1 elements: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",array1[i]);
        array2[i]=array1[i];
    }
    printf("\narray2 elements after copying : ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",array2[i]);
    }
    return 0;
}