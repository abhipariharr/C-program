#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a=3,b=4;
    printf("The value of a and b is %d and %d\n",a,b);
    swap(&a,&b);  // & we use this for address
    printf("The value of a and b after the function call is %d and %d\n", a,b);
    return 0;
}

/* it will work due to call by reference
*/
void swap(int *a,int *b)
{
    int temp;
    temp=*a;  //we used * to get the value
    *a=*b;
    *b=temp;
}