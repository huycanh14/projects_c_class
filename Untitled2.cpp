#include<stdio.h>
#include<conio.h>
main()
{
int n,tt;
do {
printf("Nhap n: ");
scanf("%d",&n);
} while (n<=0);
tt=n%10;
if (tt==3)
printf("So tan cung la so 3.");
else
printf("So tan cung khong la 3");
}
