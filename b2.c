/*
 * B2
 */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
 
#define PI 3.14159265
 
#define RADIANS(x) (x*(PI/180))
#define DEGREES(x) (x*(180/PI))
 
/* Origins */
#define X0 (getmaxx()/2)
#define Y0 (getmaxy()/2)
 
/* Place (x,y) in x-y plane */
#define X(x) (X0+(x))
#define Y(y) (Y0-(y))
 
/* Left and right ends of x-axis*/
#define x_left_border()  (-1*getmaxx()/2+10)
#define x_right_border() (getmaxx()/2-10)
 
void drawxaxis() {
 line(5, getmaxy() / 2, 12, getmaxy() / 2 - 7);
 line(5, getmaxy() / 2, 12, getmaxy() / 2 + 7);
 
 line(5, getmaxy() / 2, getmaxx() - 5, getmaxy() / 2);
 
 line(getmaxx()-5, getmaxy() / 2, getmaxx() - 12, getmaxy() / 2 - 5);
 line(getmaxx()-5, getmaxy() / 2, getmaxx() - 12, getmaxy() / 2 + 5);
}
 
void drawyaxis() {
 line(getmaxx() / 2, 5, getmaxx() / 2 - 7, 12);
 line(getmaxx() / 2, 5, getmaxx() / 2 + 7, 12);
 
 line(getmaxx() / 2, 5, getmaxx() / 2, getmaxy() - 5);
 
 line(getmaxx() / 2, getmaxy() - 5, getmaxx()/ 2- 7, getmaxy() - 12);
 line(getmaxx() / 2, getmaxy() - 5, getmaxx()/ 2+ 7, getmaxy() - 12);
 
}
 
int main(void) {
 int color;
 double height = 0;
 double freq = 0;
 double y = 0;
 double x = 0;
 
 int gdriver = DETECT, gmode = 0;
 initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
 
 drawxaxis();
 drawyaxis();
 
 getch();
 height = 50;
 freq = 2;
 for (x = x_left_border(); x < x_right_border(); x += 0.1) {
  /* Drawing speed */
  delay(1);

  /*Calculate y for given x degrees*/
  y = height * sin(RADIANS(x*freq));

  /* Draw pixel at x,y */
  putpixel(X(x), Y(y), 15);
 }

for (x = x_left_border(); x < x_right_border(); x += 0.1) {
  /* Drawing speed */
  delay(1);

  /*Calculate y for given x degrees*/
  y = height * ( 2*cos(RADIANS(x*freq)) + sin(RADIANS(x*freq)));

  /* Draw pixel at x,y */
  putpixel(X(x), Y(y), 15);
 }

 getch();

 cleardevice();
 closegraph();
 return 0;

}
