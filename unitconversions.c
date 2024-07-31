#include<stdio.h>
#include<conio.h>

void in(float);
void ci(float);
void inf(float);
void km(float);
void pk(float);
int main()
{
    int ch;
    float a;

    printf("<<<<<<<<<<<<<This is unit conersion calculator>>>>>>>>>>>>>\n");
    printf("\n1: inches to meter\t\t\t\t\t");
    printf("2: centimeter to inches\n");
    printf("3: inches to foot\t\t\t\t\t");
    printf("4: kilometer to miles\n");
    printf("5: pound to kilogram\t\t\t\t\t");
    printf("6: EXIt\n\n");
    printf("\t\t\tEnter your choice=");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
        {
            printf("Enter the inches=");
            scanf("%f",&a);
            in(a);
            break;
        }
        case 2:
        {
            printf("Enter the centimeter=");
            scanf("%f",&a);
            ci(a);
            break;
        }
        case 3:
        {
            printf("Enter the inches=");
            scanf("%f", &a);
            inf(a);
            break;
        }
        case 4:
        {
            printf("Enter the kilometer=");
            scanf("%f", &a);
            km(a);
            break;
        }
        case 5:
        {
            printf("Enter the pound=");
            scanf("%f", &a);
            pk(a);
            break;
        }
        case 6:
        {
            break;
        }
    }
    getch();
}
    
    void in(float x)
    {
        float c;
        c=x*0.0254;
        printf("%f inches is equal to %f meter", x,c);
    }
    void ci(float x)
    {
        float c;
        c=x*0.39370079;
        printf("%f centimeter is equal to %f inches", x,c);
    }
    void inf(float x)
    {
        float c;
        c=x*0.08333333;
        printf("%f inches is equal to %f foot", x,c);
    }
    void km(float x)
    {
        float c;
        c=x*0.62137119;
        printf("%f kilometer is equal to %f miles", x,c);
    }
    void pk(float x)
    {
        float c;
        c=x*0.45359237;
        printf("%f pound is equal to %f kilogram", x,c);
    }