#include<stdio.h>
#include<conio.h>

int Tich(int n)
{
	int tich = 1;
	while(n!=0)
	{
		if((n%10)%2 == 0)
		{
			tich = tich*(n%10);	
		}
		n = n/10;
	}
	return tich;
}

main()
{
	int n, tich = 0;
	do
	{
		printf("Nhap n = ");
		scanf("%d", &n);
		
	}while(n<=0);
	tich = Tich(n);
	if(tich != 0) 
	{
		printf("Tich so duong n = %d", tich);
	}
	else printf("Khong co so chan");
}
