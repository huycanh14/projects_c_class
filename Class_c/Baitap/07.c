/*
	viet chuong trinh nhao day so thuc x1, x2,..,xn (0<n<100)
	Tim phan tu am lon nhat
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
	int i, n, dem = 0;
	float *a, max = -3.4e38;
	
	do
	{
		printf("Nhap so phan tu cua mang n = ");
		scanf("%d", &n);
	}while(n<=0 || n>=100);
	
	a = (float *)calloc(n, sizeof(float));
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ", i+1);
		scanf("%f", a+i);
	}
	printf("Day so vua nhap la\n");
	for(i=0; i<n; i++) printf("%0.3f\t", *(a+i));
	
	//--------------------------
	for(i=0; i<n; i++)
	{
		if(*(a+i) < 0 && *(a+i) > max)
		{
			max = *(a+i);
			dem ++;
		}
	}
	printf("\n");
	if(dem == 0) printf("Khong co phan tu am nao lon nhat");
	else printf("Phan tu am lon nhat = %0.3f", max);
	free(a);
	return 0;
}
