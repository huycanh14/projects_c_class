//Doi cho phan tu nho nhat cho phan tu dau tien
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
	int i, j, *a, n, dau, min;
	// In va ghi ra man hinh
	do
	{
		printf("Nhap so phan tu n = ");
		scanf("%d", &n);
	} while(n<= 0||n>= 50);
	
	a = (int *) calloc (n, sizeof(int));
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i+1);
		scanf("%d", a+i);
	}
	dau = *a;
	min = dau;
	printf("Day so vua nhap la: ");
	
	for(i=0; i<n; i++) printf("%d \t", *(a+i));
	
	//Tim so be nhat
	for(i=0; i<n; i++)
	{
		if(min > *(a+i)) min = *(a+i);
	}
	//*a = min;
//	printf("\n%d \t", min);
	for(i = 0; i<n; i++)
	{
		if(*(a+i) == min) *(a+i) = dau;
	}
	*a = min;
	
	printf("\nDay so sau khi sua la: ");
	for(i=0; i<n; i++) printf("%d \t", *(a+i));
	
	//
	
	free(a);
	return 0;
}
