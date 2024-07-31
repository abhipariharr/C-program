#include<stdio.h>
void swap(int x,int y);
int main()
{
    int x=3, y=4;
    printf("The value of x and y before swap is %d and %d\n", x,y);
    swap(x,y);
    printf("The value of x and y after function is %d and %d\n",x,y);
    return 0;
}
  /* it will not swap because we are using call by value and we are sending copies
  that's why we can't touch x and y
  */
void swap(int x, int y)
{
    int temp;
    temp=x; 
    x=y;
    y=temp;
}
