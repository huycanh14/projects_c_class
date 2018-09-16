#include <stdio.h>
 
void nhapMang(int a[], int n) {
    int i;
    // thuc hien nhap tung phan tu mang
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}


