#include<stdio.h>
#include<conio.h>
#define max_row 10
#define max_cols 10
int main()
{
    int rows,column;
    int a[max_row][max_cols],b[max_row][max_cols],sum[max_row][max_cols];
    
    printf("Enter the number of rows\n");
    scanf("%d",&rows);

    printf("Enter the number of colummns\n");
    scanf("%d",&column);

    //taking first matrix

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("Enter the first matrix\n");
            scanf("%d", &a[i][j]);
        }
    }

    //taking 2nd matrix

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("Enter the second matrix elements\n");
            scanf("%d", &b[i][j]);
        }
    }


    //sum of 2 matrix

    for(int i=0; i<rows; i++ )
    {
        for(int j=0; j<column; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    //output

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
             
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

getch();
}