//Viet chuong trinh nhap so nguyen duong tinh tich cac chu so chan. VD: 456 = 4*6 = 24
#include<stdio.h>
#include<conio.h>
main()
{
	int n, tich = 1;
	do 
	{
		printf("n = "); scanf ("%d", &n);
	}
		while(n<= 0);
	while (n!=0)
	{
		if ((n%10)%2 == 0)
			tich = tich * (n%10);
		n = n/10;
	}
	printf("Tich cac so chan la: %d\n", tich);
	getch();
}
