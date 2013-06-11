#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main(void)
{
  	int *a, *b, f[8];
	float R, l1, l2, xO, yO;
	
	//A
	f[0] = f[1] = f[6] = f[7] = 200;
	//B
	f[2] = 200;
	f[3] = 300;
	//C
	f[4] = 300;
	f[5] = 300;
	//grdiver and gmode
	a = DETECT;
	b = 0;
	
	//l1, l2 use for calculte R
	l1 = (f[5] - f[1])/2.0;
	l2 = (f[4] - f[2])/2.0;
	
	//xO, yO 
	xO = (f[2]+f[4])/2.0;
	yO = (f[5]+f[1])/2.0;
	
	//initialize Graphics
	initgraph(&a, &b, "EGAVGA.BGI");
	setbkcolor(BLUE);
	setcolor(WHITE);
	
	//calculate R
	R =  sqrt( l1 * l1 + l2 * l2 );

	//Draw and fill ellipse
	setfillstyle(SOLID_FILL, RED);
	fillellipse( xO, yO, R*2, R);


	//Draw and fill circle
	setfillstyle(SOLID_FILL, GREEN);
	fillellipse( xO, yO, R, R);

	//Draw and fill polly
	setfillstyle(SOLID_FILL, YELLOW);
	fillpoly(4, f);
	
	getch();
	return 0;
}
