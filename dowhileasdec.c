#include<stdio.h>
int main()
{
    int i=0;
        while(i<10)
    {
        printf("%d", i);
        scanf("%d", &i);
        ++i;
    }
        while(i>10)
    {
        printf("%d", i);
        --i;
    }
    return 0;
}