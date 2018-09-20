/*
	Viet chuong trinh nhap vao 1 xau ki tu, sau do dem ca ki tu la chu so trong xau.
	Vd: ABCD12357TYU =>6 ký tu la chu so
*/
#include <stdio.h>
#include <conio.h>

main()
{	//getchar(): lay tung ki tu tu ban phim
	//putchar(): in tung ki tu ra ban phim
	char xau[] = "";
	int i, j, n, dem = 0;
	printf("Nhap xau ki tu: ");
	gets(xau); 
	//puts(xau); //in ra xau ki tu
	//i = strlen(xau); //strlen: dem do dai (kich thuoc) cua xau
	for(i= 0; i<strlen(xau); i++)
		if(xau[i] >= '0' && xau[i] <= '9') dem++;
		
	printf("Ky tu la so trong xau = %d", dem);
	//getch();
	return 0;
}
