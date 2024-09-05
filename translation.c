#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int gd=DETECT,gm;
int n,i,x[10],y[10],tx,ty;
void draw();
void translation();
void main(){
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Enter no. of sides of polygon");
    scanf("%d",&n);
    printf("\nEnter co-ordinates of x and y of vertex:");
    for(i=0;i<n;i++)
    scanf("%d %d",&x[i],&y[i]);
    printf("Enter translation co-ordinates:");
    scanf("%d %d",&tx,&ty);
    cleardevice();
    setcolor(RED);
    draw();
    translation();
    setcolor(WHITE);
    draw();
    getch();
    closegraph();
}
void draw(){
    for(i=0;i<n;i++)
    line(x[i],y[i],x[(i+1)%n],y[(i+1)%n]);
}
void translation(){
    for(i=0;i<n;i++){
        x[i]+=tx;
        y[i]+=ty;
    }
}