#include<stdio.h>
int main()
{
    int a,b,sum,sub;
    printf("Enter the number=");
    scanf("%d", &a);
    printf("Enter the second number=");
    scanf("%d", &b);
    sum=a+b;
    sub=a-b;
    printf("%d,%d\n", sum, sub);

    if(sum>=0)
    printf("Number is positive, ");
    else
    printf("Number is negative, ");
    if(sub>=0)
    printf("Number is positive, ");
    else
    printf("number is positive, ");
    return 0;
}