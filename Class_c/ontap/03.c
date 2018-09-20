/*
	Nhap 1 xau ki tu khong qua 200 ki tu. Sau do tim chu cai khong xuat hien trong xau.
	Khong phan biet chu in ho va chu thuong
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

//ham chuyen kieu char ve kieu int
int chuyen( char c)
{
    return (int)c-48;
}
main()
{
	int i, j, k, n, ktra;
	char xau[200], moi[200];
	char kitu[] = "QWERTYUIOPLKJHGFDSAZXCVBNM";
	int a, b, c;
	c = strlen(kitu);
	printf("Nhap mang: ");
	gets(xau);
	n = strlen(xau);
	//strlwr(): chuyen thanh chu thuong. strupr(): chuyen thanh chu in hoa
	strupr(xau);
	puts(xau);
	for(i=0; i<n-1; i++)
	{
		n = strlen(xau);
		a = chuyen(xau[i]);
		for(j=i+1; j<n; j++)
		{	
			b = chuyen(xau[j]);
			if(a == b)
			{	
				for(k=j; k<n; k++)
				{
					xau[k] = xau[k+1];				
				}
				xau[strlen(xau)] = '\0';				
				j--;
				i--;			
			}			
		}
	}
	//for(i=0; i<strlen(xau); i++) printf("%c", xau[i]);
	//printf("\n");
	//puts(xau);
	
	//ktra voi xau khi tu chu cai, cai nao co thi xoa
	for(i=0; i<n-1; i++)
	{
		n = strlen(xau);
		a = chuyen(xau[i]);
		for(j=0; j<c; j++)
		{	
			b = chuyen(kitu[j]);
			if(a == b)
			{	
				for(k=j; k<c; k++)
				{
					kitu[k] = kitu[k+1];				
				}
				kitu[strlen(kitu)] = '\0';							
			}			
		}
	}
	printf("Nhung ki tu chua xuat hien:\n");
	for(i=0; i<strlen(kitu); i++) printf("%c\t", kitu[i]);
	//puts(kitu);
	return 0;
}
