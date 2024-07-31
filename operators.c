#include<stdio.h>
int main()
{
    int a,b;

    printf(":- PLEASE ENTER DATA TO FIND REMAINDER\n");

    printf("Enter your number a\n ");
    scanf("%d", &a);

    printf("Enter number b\n ");
    scanf("%d", &b);

    printf("This is your result for given data : %d\n", a%b);

    

    return 0;

}