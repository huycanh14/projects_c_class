#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i, n, dem = 0, sum = 0;
	//Nhap so
	do
	{
		printf("Nhap so nguyen duong n = "); scanf("%d", &n);
	}while(n<= 0);

	//In so
	printf("So vua nhap la: %d\n", n);
	
	if(n == 1) printf("%d Khong phai la so nguyen to\n", n);
	else{
		//Kiem tra co la so nguyen to ko?
		for(i=2; i<n; i++){
			if(n%i == 0)
			{
				dem++; break;
			}
			  
		}
		if(dem != 0) printf("%d Khong phai la so nguyen to\n", n);
		else printf("%d La so nguyen to\n", n);
	}
	//Ktra co la so hoan hao khong
	 for(i=1; i<n; i++){
      if(n%i==0)
           sum=sum+i;
 	 }
	 if(sum==n) printf("%d la sao hoan hao\n",n);
     else printf("%d khong phai la so hoan hao\n",n);
	
}