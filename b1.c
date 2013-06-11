#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main(void)
{
  int *a, *b, f[8];
	float R;
	f[0] = f[1] = f[6] = f[7] = 200;

	f[2] = 200;
	f[3] = 300;

	f[4] = 300;
	f[5] = 300;

	a = DETECT;
	b = 0;

	initgraph(&a, &b, "EGAVGA.BGI");
	setbkcolor(BLUE);
	setcolor(WHITE);

	R =  sqrt( (f[5] - f[1])/2.0*(f[5] - f[1])/2.0 + (f[4] - f[2])/2.0 * (f[4] - f[2])/2.0 );

	setfillstyle(SOLID_FILL, RED);
	fillellipse( (f[2]+f[4])/2.0, (f[5]+f[1])/2.0, R*2, R);

	setfillstyle(SOLID_FILL, GREEN);
	fillellipse( (f[2]+f[4])/2.0, (f[5]+f[1])/2.0, R, R);

	setfillstyle(SOLID_FILL, YELLOW);
	fillpoly(4, f);
	getch();
	return 0;
}
