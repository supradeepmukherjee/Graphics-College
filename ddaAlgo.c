#include <conio.h> 
#include <graphics.h> 
#include <stdio.h> 
#include <math.h> 
void main() { 
	float x1,x2,y1,y2,dx,dy,xInc,yInc;
    int steps,i=1;
    int gd=DETECT,gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); 
	cleardevice();
    printf("Enter co-ordinates of 1st end point:");
    scanf("%f%f",&x1,&y1);
    printf("Enter co-ordinates of 2nd end point:");
    scanf("%f%f",&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    if(fabs(dx)>fabs(dy))
        steps=fabs(dx);
    else
        steps=fabs(dy);
    setbkcolor(WHITE);
    putpixel(x1,y1,4);
    xInc=dx/steps;
    yInc=dy/steps;
    for(i;i<=steps;i++){
        x1+=xInc;
        y1+=yInc;
        putpixel(x1,y1,4);
    }
	getch(); 
	closegraph(); 
} 
