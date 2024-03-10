 #include<stdio.h>
 int number(int n)
 {
    if(n%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
 }
 int main()
 {
    int n;
    printf("enetr the number :");
    scanf("%d",&n);
    number(n);
    printf("%d",number);
    return 0;
 }


