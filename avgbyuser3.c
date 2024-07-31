#include<stdio.h>
int main()
{
    float a,b,c,d,e,avg;
    
    printf("Enter the 5 number for their average\n");
    scanf("%f%f%f%f%f", &a, &b ,&c, &d, &e);

    avg=(a+b+c+d+e)/5;
    
    printf("The avg of your given number is %f\n",avg);
    return 0;
}