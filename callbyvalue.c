#include<stdio.h>
int sum(int a, int b);
int main()
{
    int a=4,b=7;
    printf("The value of a and b is %d and %d\n",a,b);
    printf("The value of 4+7 is %d\n",sum(a,b));
    printf("The value of a and b is %d and %d after function call",a,b);
    return 0;
}  
 /*the value of a and b doesn't change throughout the program because by the medium
  of function you can't change the variable of main */ 

int sum(int a,int b)
{
    int c;
    c=a+b;
    a=429734;
    b=3482487;
    return c;
}