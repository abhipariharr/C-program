#include<stdio.h>
int main()
{
    int a[3],i;
    
    for( i=0; i<3; i++)
    {
    printf("Enter the marks of roll number %d\n",i);
    scanf("%d", &a[i]);
    }
    
    for( i=0; i<3; i++)
    {
        printf("roll no. %d marks are %d\n",i, a[i]);
    }
}