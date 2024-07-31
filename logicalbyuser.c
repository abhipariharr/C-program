#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter the 2 number to check logical operators: ");
    scanf("%d %d", &a, &b);
    printf("AND OPERATOR=%d\n", a&&b);
    printf("OR OPERATOR=%d\n", a||b);
    printf("LOGICAL NOT=%d\n", !(a&&b));
    printf("LOGICAL NOT=%d\n", !(a||b));
    return 0;
}