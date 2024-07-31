#include<stdio.h>

int factorial(int number)                                        //return type
{
    if (number == 1 || number == 0)                              //decesion making
    {
        return 1;
    }
    else
    {
        return (number * factorial(number-1));   
    }
}
    int main()                                                   //main functiom
    {
    int num;                                                     //declaration
    printf("Enter the number to find factorial=");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num));
    
    return 0;
}