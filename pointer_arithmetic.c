#include<stdio.h>
int main()
{
    int a=23;
    int *p=&a;
    printf("The address of a is %u\n",p);
    p++;
    printf("The address of a is %u\n",p);  

    printf("The address of a is %u\n",p);
    p--;
    printf("The address of a is %u\n",p);
}