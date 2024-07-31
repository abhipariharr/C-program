/* writing a C program to display the average of the 5 number taken by users */

#include<stdio.h>
int main()
{
    int a,b,c,d,sum,avg;
    printf("Enter the number a\n");
    scanf("%d",&a);
    
    printf("Enter the number b\n");
    scanf("%d",&b);
    
    printf("Enter the number c\n");
    scanf("%d",&c);
    
    printf("Enter the number d\n");
    scanf("%d",&d);
    
    sum=a+b+c+d;
    printf("The sum of the given number is %d\n",sum);

    avg=(a+b+c+d)/4;
    
    printf("The avg of your given number is %d\n",avg);
    
    return 0;
}