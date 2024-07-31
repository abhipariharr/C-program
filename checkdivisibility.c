#include<stdio.h>
int main()
{
    int a,b,divide;
    printf("Enter the first number=");
    scanf("%d", &a);
    printf("Enter the second number=");
    scanf("%d", &b);
    
    if(a%b==0)
        printf("a is divisible by b");
    else
        printf("a is not divisible by b");
}