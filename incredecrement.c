#include<stdio.h>
int main()
{
    int a=5;;
    printf("The value of a after a++ = %d\n", a++);
    //a++ means first print the increment
    printf("The value of a is = %d\n",a);

    printf("Enter the value to check ++a = ");
    scanf("%d",&a);

    printf("The value of a after ++a is = %d\n", ++a);
    //++a means first increment then print
    printf("The value of a is = %d\n",a);

    return 0;
}