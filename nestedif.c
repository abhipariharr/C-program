/*Writing a code of if else if condition to give gifts to student.
*/

#include<stdio.h>  /*preproceesor section*/
int main()
{
    int maths,science;
    printf("Enter your maths number=");
    scanf("%d", &maths);
    printf("Enter your science number=");
    scanf("%d", &science);
    printf("%d,%d", maths,science);

    if (maths>=45)
    {
        printf("🎉congratulations! You've passed ");
    }
    else if (science>=45)
    {
        printf("🎉congratulations! You've passed ");
    }
    else if (maths<=15)
    {
        printf("😢opps! you are fail ");
    }
    else if (science<=15)
    {
        printf("opps! You are fail ");
    }
    else
    {

    }
}