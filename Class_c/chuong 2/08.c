#include <stdio.h>
main()
{
    int i, j,n,dem=0;
    printf("\n Nhap n: ");
    scanf("%d", &n);
    for (i=2;i<n;i++)
    {
        for (j=1;j<=i;j++)
        {
            if(i%j==0)
                dem=dem+1;
        }
        if(dem==2)
            printf("%d, ", i);
        dem=0;
    }
    printf("\n");
}