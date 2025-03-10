#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, i, dem=0, a;
    printf("Nhap vao so phan tu muon nhap: ");
    scanf("%d", &n);
    int A[n];

    printf("Nhap so nguyen: ");
    for (i=1; i<=n; i++){
        scanf("%d", &A[i]);
    }
    printf("Nhap phan tu a xem phan tu a xuat hien bao nhieu lan: ");
    scanf("%d", &a);
    for (i=1; i<=n; i++){
        if (a == A[i]){
            dem ++;
        }
    }
    printf("Phan tu %d xuat hien: %d\n", a, dem);
    return 0;
}
