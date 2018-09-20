#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void Nhap(int * a, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i+1);
		scanf("%d", &a[i]);
	}
}

void In(int *a, int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%d\t", a[i]);
}
main()
{
	FILE * fra;
	fra = fopen("DL.text", "w");
	int *a, n, i, max, k, tg;
	do
	{
		printf("Nhap so phan tu cua day: n = ");
		scanf("%d", &n);
	}while(n<=0);
	a = (int*)calloc(n, sizeof(int));
	Nhap(a, n);
	printf("Day so ban vua nhap la: ");
	In(a, n);
	max = a[0];
	for(i=0; i<n; i++)
		if(max < a[i])
		{
			max = a[i];
			k = i;
		}
	tg = a[0];
	a[0] = max; a[k] = tg;
	printf("\nDay so sau khi doi vi tri: ");
	In(a, n);
	printf("\n");
	for(i=0; i<n; i++) fprintf(fra, "%d", a[i]);
	free(a);
	fclose(fra);
	//fcloseall();
}
