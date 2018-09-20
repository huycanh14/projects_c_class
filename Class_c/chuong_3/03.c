//Tim phan tu nho nhat cua ma tran va vi tri cua no

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
	int i, j, m, n, u, v;
	float **p, tg, min;
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
	p  = (float **)calloc(m, sizeof(float*));
	for(i=0;i<m;i++)
       	p[i] = (float *) calloc(n, sizeof(float));
       	
	//Nhap cac gia tri
	for(i = 0;  i<m;  i++)
       for(j = 0;  j<n; j++)
       	{	printf("a[%d][%d] = ", i+1, j+1);
			scanf("%f",&tg);
			p[i][j] = tg;
       	}
	
	printf("\nMa tran vua nhap vao:\n");
    for(i = 0;  i<m; i++)
      {    for(j = 0;  j<n; j++) printf("%0.2f\t",p[i][j]);
       	   printf("\n");
      }
	
	//----------------------------------------
	min = p[0][0];
	//printf("%d", min);
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			if(p[i][j] < min)
			{
				min = p[i][j];
				u = i; v = j;
			}
			
	printf("Gia tri nho a[%d][%d] = %0.2f\n", u+1, v+1, min);
	for(i = 0; i<m; i++) free(p[i]);      
	free(p);
	return 0;
}
