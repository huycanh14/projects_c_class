#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n , i,j;
	printf("Nhap chu so n =");
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		 
		for(int j=0;j<i;j++)
		     if(n[i]==n[j])
			 	{ 
				 kiemtra=1; 
				 break;
				}
		   if(kiemtra!=1) dem++;
		
	getch();
}
