//write a program in c to calculate the sum of n natural number

#include <stdio.h>
 
int main()
{
    int n, sum = 0, c, value;
 
    printf("Enter the number of integers you want to add\n");
    scanf("%d", &n);
 
    printf("Enter %d integers\n",n);
 
    for (c = 1; c <= n; c++)
    {
        scanf("%d", &value);
        sum = sum + value;
    }
 
    printf("Sum of entered integers = %d\n",sum);
 
    return 0;
}