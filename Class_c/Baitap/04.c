/*
	Nhap so nguyen duong a, b. Tim BCNN
	BCNN = tich/UCLN
*/
#include <stdio.h>
#include <conio.h>
main()
{
	int a, b, UCLN, tich = 1, BCNN;
	do
	{
		printf("Nhap so nguyen duong a = ");
		scanf("%d", &a);
		
		printf("Nhap so nguyen duong b =  ");
		scanf("%d", &b);
	}while(a<=0 ||b<= 0);
	
	tich = a*b;
	while(a!=b)
	{
		if(a > b) a -= b;
		else b -= a;
	}
	UCLN = a;
	BCNN = tich/UCLN;
	printf("BCNN cua hai so la: %d\n", BCNN);
	return 0;
}
