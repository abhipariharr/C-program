#include<stdio.h>
int main()
{
    int a,b;
    a=0;
    b=2;
    printf("a+b=%d\n", !(a&&b));
    printf("a+b=%d\n",a&&b);
    printf("a+b=%d\n",a||b);
    return 0;
}