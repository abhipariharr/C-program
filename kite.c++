/*  C Program to implement Kite flying in Graphics  */

#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

void main()
{
        int gd=DETECT,gm;
        int x=10,y=480;
        initgraph(&gd,&gm,"..\\bgi");
        while(!kbhit())
        {
                cleardevice();
                if(y==0)
                {
                        y=random(480);
                        x=random(640);
                }
                else
                {
                        y=y-1;
                        x=x+1;
                        line(x-50,y,x,y-70);
                        line(x,y-70,x+50,y);
                        line(x+50,y,x,y+70);
                        line(x,y+70,x-50,y);
                        line(x,y-70,x,y+70);
                        line(x,y+70,x+10,y+140);
                        line(x,y+70,x-10,y+140);
                        line(x-50,y,x+50,y);
                        line(x,y,x+130,y+640);
                }
                delay(20);
        }
        closegraph();
        restorecrtmode();
}
