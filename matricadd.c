#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    printf("Enter the array element=");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d\n%d", &a[i][j],&b[i][j]);
        }
    }

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d", c[i][j]);
        }
    }

}