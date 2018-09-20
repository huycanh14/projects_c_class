#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i, n, a[50], tong = 0, dem =0;
	do
	{
		printf("n = "); scanf("%d", &n);
	}while(n<= 0|| n>=50);
	
	//Nhap day so
	for(i=0; i<n; i++)
	{
		do 
		{
			printf("a[%d] = ", i+1);
			scanf("%d", &a[i]);
		}while (a[i] <=0);
	}
	//In day so
	printf("Day so vua nhap la: ");
	for(i = 0; i<n; i++) printf("%d \t", a[i]);
	
	//Ktra
	for(i = 0; i<n; i++)
	{
		if(pow(sqrt(a[i]),2) == a[i])
		{
			tong += a[i]; dem++;
		}
	}
	//Hien thong bao
	if(dem == 0) printf("Khong co so chinh phuong");
	else printf("TBC = %d", tong/dem);
	return 0;
}
