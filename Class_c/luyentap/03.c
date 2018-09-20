#include <stdio.h>
#include <conio.h>
#include <math.h>
float Dientich(float a, float b, float c)
{
	float p, s;
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
main()
{
	FILE * fra;
	fra = fopen("dientich.txt", "w");
	float a, b, c, p, s;
	do
	{
		printf("Nhap chieu dai canh cua tam giac: ");
		scanf("%f %f %f", &a, &b, &c);
	}while(a<=0 || b<=0 || c<=0);
	
	if((a + b)>c && (b+c)>a && (a+c)>b)
	{
		s = Dientich(a, b, c);
		printf("Dien tich tam giac: %f\n", s);
		fprintf(fra, "%f", s);
		fclose(fra);
	}
	else printf("Khong phai la cac canh tam giac");
}
