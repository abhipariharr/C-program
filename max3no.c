//write a program in c to find the maximum number given 3 number

#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 numbers");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
printf("%d is maximum number",a);
}
else if(b>a && b>c)
{
printf("%d is maximum number",b);
}
else
{
printf("%d is maximum number",c);
}
}