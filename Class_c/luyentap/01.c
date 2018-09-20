#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	int i, n;
	float tong = 0;
	do
	{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n<=0);
	for(i=1; i<=n; i++)
	{
		tong = tong + (float)1/i;
		//printf("%f\n", tong);
	}
		
	printf("Tong day so = %f", tong);
}
