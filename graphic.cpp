#include<graphics.h>
#include<conio.h>
int main()
{
	int gd= DETECT, gm;//rakheko file lie detect garna ko lagi command ho
	
	initgraph(&gd,&gm,"");//initgraph=initialization of graph(graphicdriver,grphicsmode,path)
	setcolor(WHITE);//deafult color
	circle (300,200,100);
//	circle(x1,y1,r);	
	setcolor(YELLOW);
	outtextxy(270,190."Hello BCA");//write the text in the circle
	getch();
	closegraph();
	
	return 0;
}
