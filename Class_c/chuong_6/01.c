#include <graphics.h>
#include <conio.h>
#include <stdio.h>
main()
{
	int driver = DETECT, mode;
	int a, b;
	initgraph(&driver, &mode, "");
	a = getmaxx ( ) / 2 ; 
	b = getmaxy ( ) / 2 ;
	setviewport ( a , b , getmaxx ( ) , getmaxy ( ) , 0 ) ;
	circle(0,0,b);
	
}