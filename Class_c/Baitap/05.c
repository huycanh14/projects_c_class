/*
	Viet chuong trinh nhap so nguyen duong n (khong chua so 0)
	Tim uoc chung cua cac chu so cua n
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int UCLN(int a, int b)
{
	int uc;
	while(a != b)
	{
		if(a>b) a = a - b;
		else b = b - a;
	}
	uc = a;
	return uc;
}
main()
{
	int n, ucln, a, b, dem = 0;	
	do
	{
		printf("Nhap so nguyen duong va khong chua so 0\n n = ");
		scanf("%d" ,&n);
		a = n;
		while(a!=0)
		{
			//b = a%10;
			if(a%10 == 0)
			{
				n = -1;
			}
			a = a/10;
		}
	} while(n<=0 );
	//---------------------------
	ucln = n%10;
	while(n!= 0)
	{
		b = n%10;
		ucln = UCLN(ucln,b);
		n = n/10;
	}
	printf("UCLN cua n = %d", ucln);
	return 0;
}
