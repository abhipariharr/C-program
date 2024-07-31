#include<stdio.h>
int main()
{
    int a=57;
    int *ptra=&a;       //stores th evariable of a
    int* ptr2=NULL;     //null pointer
    printf("this is the value of a=%d\n",*ptra);        //shows the value of a in pointer
    printf("this is the value of a =%d\n",a);            //shows the value of a
    printf("the address of pointer to a is %u\n",&ptra);   //shows the address of pointer to a  
    printf("address of a is %u\n",&a);                       //shows the address of a
    printf("address of ptr2 is %p",ptr2);                    //show the null value 
    return 0;
}