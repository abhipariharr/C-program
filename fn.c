#include<stdio.h>
int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main()
{
    int a,b,c;
    a=10;
    b=87;
    c=sum(a, b);
    printstar(9);
   // printf("%d", c);
    return 0;
}
/*int sum(int a,int b)
{
    return a+b;
}
}*/