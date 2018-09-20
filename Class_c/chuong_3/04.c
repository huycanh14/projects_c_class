//Tinh trung binh cong cac ohan tu am co 3 chu so trong mang

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
	int i, j, m, n, **a, tg, tong = 0, dem = 0;
	float TBC;
	do
	{
		printf("Nhap so hang cua ma tran: m = ");
		scanf("%d", &m);
	}while (m<=0);
	do
	{
		printf("Nhap so cot cua ma tran: n = ");
		scanf("%d", &n);
	}while (n<=0);
	
	//Cap phat bo nho cho mang 2 chieu
	a  = (int **)calloc(m, sizeof(int*));
	for(i=0;i<m;i++)
       	a[i] = (int *) calloc(n, sizeof(int));
       	
	//Nhap cac gia tri
	for(i = 0;  i<m;  i++)
       for(j = 0;  j<n; j++)
       	{	printf("a[%d][%d] = ", i+1, j+1);
			scanf("%d",&tg);
			a[i][j] = tg;
       	}
	
	printf("\nMa tran vua nhap vao:\n");
    for(i = 0;  i<m; i++)
      {    for(j = 0;  j<n; j++) printf("%d\t",a[i][j]);
       	   printf("\n");
      }
	
	//----------------------------------------
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
		{
			if(a[i][j] < -99 && a[i][j] > -1000)
			{
				dem++;
				tong +=a[i][j];
			}
		}
	TBC = tong/dem;
	if(dem != 0) 
		printf("TBC cua day so co phan tu cua 3 chu so la: %f\n", TBC);
	else printf("Day  khong co phan tu am co 3 chu so");
	//----------------------------------------
	for(i = 0; i<m; i++) free(a[i]);      
	free(a);
	return 0;
}
