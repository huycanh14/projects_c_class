/*
	Nhap so nguyen duong n (khong chua chu so 0)
	Tim UCLN cua cac chu so n
*/

#include<stdio.h>
#include<conio.h>
int UCLN(int a, int b)
{
	int ucln;
	while(a!=b)
	{
		if(a>b) a -= b;
		else b -= a;
	}
	ucln = a;
	return ucln;
}
main()
{
	int n, a, b, ucln;
	do
	{
		printf("Nhap so nguyen duong n = ");
		scanf("%d", &n);
	 	a = n;
		while(a!= 0)
		{
			if((a%10) == 0) n = -1;
			a = a/10;
		}
	}while (n<=0);
	ucln = n%10;
	while(n!=0)
	{
		b = n%10;
		ucln = UCLN(ucln, b);
		n = n/10;
	}
	
	printf("UCLN cua n = %d\n", ucln);
}
