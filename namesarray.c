#include<stdio.h>
int main()
{
    char name[3][30];
    
    for(int i=1; i<4; i++)
    
        {
            printf("Enter the name of roll number %d\n", i);
            scanf("%s", &name[i]);
        }
    for(int i=1; i<4; i++)

        {
            printf("Roll no.%d is %s\n", i,name[i]);
        }
    }