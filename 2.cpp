#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
   int i, n, s=1;
   printf("Nhap n=");
   scanf("%d", &n);
   for(i=1; i<=n; i++)
   
   	s = s + (i/(i+1));
   
   printf("tong = ", s);
} 
