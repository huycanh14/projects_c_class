//Giai phuong trinh bac 2
#include<stdio.h>
#include<conio.h>
main()
{
	float a, b, c, delta, x1, x2;
	do 
	{
		printf("Nhap a \n"); scanf("%f", &a);
	} while (a == 0);
	printf("Nhap b \n"); scanf("%f", &b);
	printf("Nhap c \n"); scanf("%f", &c);
	
	delta = b*b - 4*a*c;
	if (delta < 0) printf("Phuong trinh vo nghiem");
	else
	{
		if (delta > 0)
		{
			printf("x1 = %f", (-b + sqrt(delta))/(2*a));
			printf("x1 = %f", (-b - sqrt(delta))/(2*a));
		}
		else printf("X = %f", -b/(2*a));
	}
	getch();
	
}
