#include<stdio.h>
void sum(int,int);
void sub(int,int);
void multi(int,int);
void divi(int,int);
void main()
{
    int a,b;
    float c,d;
    printf("Enter the number a and b= ");
    scanf("%d %d", &a,&b);
    sum(a,b);
    sub(a,b);
    multi(a,b);
    divi(c,d);
    
    }
      void sum(x,y)
    {
        int sum;
        sum=x+y;
        printf("sum=%d", sum);
    }
      void sub(x,y)
    {
        int sub;
        sub=x-y;
        printf("sub=%d", sub);
    }
      void multi(x,y)
        {
            int multi;
            multi=x*y;
            printf("multi=%d", multi);
        }
        void divi(c,d)
        {
            float divi;
            divi=c/d;
            printf("divi=%f", divi);
        }