#include<stdio.h>
#include<conio.h>
void starpattern(int rows)
{
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
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
    starpattern(rows);
    getch();
    return 0;
}