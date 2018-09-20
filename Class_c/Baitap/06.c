/*
	Viet chuo ng trinh nhap day so nguyen x1, x2,...xn(0<n<50)
	Tinh tong cac phan tu duong, le co 2 chu so trong day
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
main()
{
	int n, i, *a, chan = 0, le = 0, dem_chan = 0, dem_le = 0;
	do
	{
		printf("Nhap so phan tu cua mang n = ");
		scanf("%d", &n);
	}while(n<=0||n>=50);
	
	a = (int*)calloc(n, sizeof(int));
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ", i+1);
		scanf("%d", a+i);
	}
	printf("Day so vua nhap la:\n");
	for(i=0; i<n; i++) 
		printf("%d\t", *(a+i));
		
	printf("\n");
	//-------------------------
	for(i=0; i<n; i++)
	{
		if(*(a+i)%2 == 0 && *(a+i) >9 && *(a+i)<100)
		{
			chan = chan + *(a+i);
			dem_chan ++;
		}
		if(*(a+i)%2 != 0 && *(a+i) >9 && *(a+i)<100)
		{
			le = le + *(a+i);
			dem_le++;
		}
	}
	
	if(dem_chan != 0) printf("Tong cac phan tu duong co 2 chu so trong day = %d\n", chan);
	else printf("Khong co phan tu duong co 2 chu so trong day\n");
	
	if(dem_le != 0) printf("Tong cac phan tu le co 2 chu so trong day = %d\n", le);
	else printf("Khong co phan tu le co 2 chu so trong day\n");
	
	free(a);
	return 0;
}
