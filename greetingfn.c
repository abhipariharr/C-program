#include<stdio.h>
void goodmorning();       //function prototype     
void goodafternoon();     //function prototype
void goodnight();         //function prototype

int main()
{
    goodmorning();        //function call
    goodafternoon();      //function call
    goodnight();          //function call
    return 0;
}

void goodmorning()
{
    printf("Good Morning\n");          //function declaration
}
void goodafternoon()
{
    printf("Good Afternoon\n");        //function declaration
}
void goodnight()
{
    printf("Good Night");              //function declaration
}