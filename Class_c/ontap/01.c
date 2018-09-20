/*
	Nhap day so nguyen duong x1, x2, x3,..., xn
	Tinh tong cac phan tu nam o vi tri le
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int i, n, *a, tong = 0;
	do
	{
		printf("Nhap day so n = ");
		scanf("%d", &n);
	}while(n<=0);
	a = (int *)calloc(n, sizeof(int));
	
	for(i= 0; i<n; i++)
	{	
		do
		{
			printf("a[%d] = ", i+1);
			scanf("%d", (a+i));
		}while( *(a+i)< 0);
	}
	
	printf("Day so vua nhap:\n");
	for(i=0; i<n; i++) printf("%d\t", *(a+i));
	printf("\n");
	
	for(i=0; i<n; i++)
		if(i%2 == 0)
		{
			tong = tong + *(a+i);
		}
	printf("Tong cac phan tu o vi tri le = %d\n", tong);
	free(a);
}
