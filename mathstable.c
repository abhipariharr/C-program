#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number= " );
    scanf("%d", &a);

    for(b=1; b<=10; ++b)
    {
        printf("%d*%d=%d\n", a,b,a*b);
    }
    return 0;
}