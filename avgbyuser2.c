/* writing a C program to display the average of the 5 number taken by users */

#include<stdio.h>
 int main()
{
    float a,b,c,d,avg;
    printf("Enter the number a\n");
    scanf("%f",&a);

    printf("Enter the number b\n");
    scanf("%f",&b);

    printf("Enter the number c\n");
    scanf("%f",&c);

    printf("Enter the number d\n");
    scanf("%f",&d);

    printf("The sum of the given number is %f\n",a+b+c+d);

    avg=(a+b+c+d)/4;

    printf("The avg of your given number is %f\n",avg);

    return 0;

}
