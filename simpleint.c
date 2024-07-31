#include<stdio.h>
int main()
{
    int P,R,T,multi;
    printf("Enter the principle P\n");
    scanf("%d", &P);
    printf("Enter the Rate R\n");
    scanf("%d", &R);
    printf("Enter the time T\n");
    scanf("%d", &T);
    multi=(P*R*T);
    
    printf("This is your simple interest =%d ", (multi)/100);
    return 0;
}