#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number=");
    scanf("%d",&a);
    
    int* ptra=&a;
    
    printf("the value of a is=%d\n",a);
    printf("the value of a is=%d\n",*ptra);
    printf("the address of a is=%p\n",&a);
    printf("the address of pointer=%p",&ptra);
}