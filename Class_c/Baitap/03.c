/*
	Nhap 2 so nguyen duong a, b. Tim Uc chung lon nhat
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	int a, b, UCLN;
	do
	{
		printf("Nhap so nguyen duong a = ");
		scanf("%d", &a);
		
		printf("Nhap so nguyen duong b = ");
		scanf("%d", &b);
	} while(a<= 0|| b<=0);
	
	while(a!= b)
	{
		if(a>b) a = a-b;
		else b= b-a;
	}
	UCLN = a;
	printf("UCLN cua 2 so = %d\n", UCLN);
	
	return 0;
}
