#include<stdio.h>
#include<conio.h>
#define max_row 10
#define max_cols 10

int main()
{
    int rows,column;
    int a[max_row][max_cols],b[max_row][max_cols],multi[max_row][max_cols];

    printf("Enter the number of rows\n");
    scanf("%d",&rows);

    printf("Enter the number of column\n");
    scanf("%d", &column);

    //taking first matrix

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("Enter the elements in rows\n");
            scanf("%d",&a[i][j]);
        }
    }
    
    //taking second matrix

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("Enter the elements in columns\n");
            scanf("%d",&b[i][j]);
        }
    }

    //multiplication of two matrix

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            multi[i][j]=a[i][j]*b[i][j];
        }
    }

    //result of matrix

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("%d\t",multi[i][j]);
        }
        printf("\n");
    }
    getch();
}