#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
void main()
{int gm=DETECT,gd,angle=0;
struct arccoordstype a;
initgraph(&gm,&gd,"C:\\TURBOC3\\BGI");

while(angle<=360)
{
	setcolor(BLUE);
	arc(300,250,0,angle,150);
	getarccoords(&a);
	circle(a.xend,a.yend,50);
	angle+=5;
	delay(10);
}
angle=0;
while(angle<=360)
{       if (angle>=2)
	{
		setcolor(GREEN);
		arc(300,250,0,angle,250);
		getarccoords(&a);
		circle(a.xend,a.yend,50);
	}
	angle+=2;
	delay(1);
}
cout<<"Hit Enter To EXIT!";
getch();
closegraph() ;
}