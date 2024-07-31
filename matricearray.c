#include<stdio.h>
int main()
{
    int a[4];
    int row=2,column=2;
    int index=0;

    printf("Enter the 4 array of element=\n");
    for(int i=0; i<4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array in matrix form:\n");

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("%d ", a[index]);
            index++;
        }
        printf("\n");
    }
}