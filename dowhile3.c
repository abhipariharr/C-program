#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    do
    {
        printf(" %d", i);
        ++i;
    }
    while(i<10);
    do
    {
        printf(" %d", i);
        --i;
    }
    while(i>=0);
    return 0;
}