#include<stdio.h>
#include<conio.h>
void reverseStarpattern(int rows)
{
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows-i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows;
    printf("Enter the rows you want=");
    scanf("%d",&rows);
    reverseStarpattern(rows);
    getch();
    return 0;
}