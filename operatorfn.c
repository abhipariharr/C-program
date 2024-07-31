#include<stdio.h>
void sum(int,int);
void sub(int,int);
void multi(int,int);
void divide(float,float);
int main()
{
    int a,b;
    printf("Enter the two number=");
    scanf("%d %d", &a,&b);
    sum(a,b);
    sub(a,b);
    multi(a,b);
    divide(a,b);
}
    void sum(int x,int y)
    {
        int sum;
        sum=x+y;
        printf("sum=%d\n", sum);
    }
    void sub(int x,int y)
    {
        int sub;
        sub=x-y;
        printf("sub=%d\n", sub);
    }
    void multi(int x,int y)
    {
        int multi;
        multi=x*y;
        printf("multi=%d\n", multi);
    }
    void divide(float x,float y)
    {
        float divide;
        divide=x/y;
        printf("divide=%f",divide);
    }