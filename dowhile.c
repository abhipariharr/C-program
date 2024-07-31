#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    do
    {
        printf("%d", a);
        a=a+1;
    }
    while(a<10);
    
    return 0;
}