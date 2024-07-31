#include<stdio.h>
int main()
{
    float pi=3.14,r,area;
    printf("Enter the radius of the circle=");
    scanf("%f", &r);
    area=pi*r*r;
    printf("This is your area of given circle=%3lf", area);
}