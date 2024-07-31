//this program is about creating operators 
#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter your a number \n");
    scanf("%d", &a);

    printf("Enter your b number \n");
    scanf("%d", &b);

    printf("This is the sum of given number %d\n", a+b);
     printf("This is the sub of given number %d\n", a-b);
      printf("This is the multi of given number %d\n", a*b);
       printf("This is the divi of given number %d\n", a/b);
        printf("This is the remainder of given number %d\n", a%b);

        return 0;
}