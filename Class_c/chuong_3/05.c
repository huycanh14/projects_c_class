/*
	Viet chuong trinh nhap ma tran vuong cap n (0<n<50).
	Tim cac phan tu la so chinh phuong tren duong cheo chinh cua ma tran
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int i, j, n, **pa, tg, dem = 0;
	do
	{
		printf("Nhap ma tran vuong cap n = ");
		scanf("%d", &n);
	} while(n<=0 || n>= 50);
	//Cap phat bo nho dong
	pa = (int**)calloc(n, sizeof(int*));
 	for(i=0; i<n; i++)
 		pa[i] = (int*)calloc(n, sizeof(int));
 		
	//Nhap cac gia tri cua tung phan tu cua ma tran
	for(i=0; i<n; i++)
 		for(j=0; j<n; j++)
	 	{
	 		do
	 		{
		 		printf("a[%d][%d] = ", i+1, j+1);
				scanf("%d",&tg);
				pa[i][j] = tg;
		 	}while(pa[i][j]<0);
 			
		 }
 	
 	//In ma tran
 	printf("\nMa tran vua nhap vao:\n");
    for(i = 0;  i<n; i++)
      {    for(j = 0;  j<n; j++) printf("%d\t",pa[i][j]);
       	   printf("\n");
      }
 	//-------------------------------
 	printf("So chinh phuong nam tren duong cheo chinh: ");
 	
 	for(i=0; i<n; i++)
 		for(j=0; j<n; j++)
 		{
			if((i = j) && (pow(sqrt(pa[i][j]), 2) == pa[i][j]))
			{
				printf("%d\t", pa[i][j]);
				dem ++;
			}
				
	 	}
	 	
 	if(dem == 0) printf("Khong co");
 	//-------------------------------
 	//Giai phong bo nho
 	for(i=0; i<n; i++) free(pa[i]);
 	free (pa);
	return 0;
}
