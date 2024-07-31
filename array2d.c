#include<stdio.h>
int main()
{
    int a[3][2];
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
    {
    printf("Enter the marks of roll number %d\n",i);
    scanf("%d", &a[i][j]);
    }
    }
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
    {
        printf("roll no.%d marks are %d\n",i, a[i][j]);
    }
    }
}