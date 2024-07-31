#include<stdio.h>
int main()
{
    int a,b,sum,sub;
    printf("Enter the number = ");
    scanf("%d", &a);
    printf("Enter the number = ");
    scanf("%d", &b);
    sum=a+b;
    sub=a-b;
    printf("%d, %d", sum, sub);

    if(sum,sub%2==0)
    printf("\nnumber is even");
    else
    printf("\nnumber is odd");
    return 0;
}