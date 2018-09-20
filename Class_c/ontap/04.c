/*
	Viet chuong trinh nhap so nguyen duong n, sau do chen chu so nho nhat vao sau cac chu so chan
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void
main()
{
	int i, j, n, min;
	int a[100];
	do
	{
		printf("Nhap so phan tu cua mang n = ");
		scanf("%d", &n);
	}while(n<=0);
	
	//a = (int*)calloc(n, sizeof(int));
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ", i+1);
		scanf("%d", (a+i));
	}
	
	printf("Day so vua nhap:\n");
	for(i=0; i<n; i++) printf("%d\t", *(a+i));
	printf("\n");
	//tim phan tu co gia tri nho nhat
	min = a[0];
	for(i=0; i<n; i++)
		if(a[i] < min)	min = a[i];
//	printf("%d", min);

//	them phan tu nho nhat sau chu so chan
	for(i=0; i<n; i++)
	{
		if(a[i]%2 == 0)
		{
			for(j=n; j>i+1; j--)
				a[j] = a[j-1];
			a[i+1] = min;
			n++;
			i++;
		}
	}
	printf("\n");		
	for(i=0; i<n; i++) printf("%d\t", *(a+i));
	printf("\n");
	//free(a);
	return 0;
}
