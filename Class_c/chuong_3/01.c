// Xoa cac phan tu bang 0
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
	int i, j, n, *a;
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
	
	printf("Day so vua nhap la: ");
	for(i=0; i<n; i++) printf("%d \t", *(a+i));
	
	// Xoa cac phan tu bang 0
	
	for(i=0; i<n; i++)
	{
		if(*(a+i) == 0)
		{
			for(j=i; j<n-1; j++) a[j] = a[j+1];
			n--;
			i--;
		}
	}
	printf("\nDay so sau khi xoa la: ");
	for(i=0; i<n; i++) printf("%d \t", *(a+i));
	
	free(a);	
	return 0;
}
