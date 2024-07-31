#include<stdio.h>
int addition();
void main()
{
    int result;
    int (*ptr)();
    ptr=&addition;
    result=(*ptr)();

    printf("This is the sum %d",result);
}
int addition()
{
    int a,b;
    printf("Enter two number=");
    scanf("%d %d",&a,&b);
    return a+b; 
}