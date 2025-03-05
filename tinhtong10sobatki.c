#include<stdio.h>

int main (){
    int i, n, Tong=0;
    printf("Nhap vao so luong cac so can tinh: ");
    scanf("%d", &n);
    int A[n];

    printf("Nhap so nguyen: \n");
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
        Tong = Tong + A[i];
    }

    printf("Tong cac so da nhap la: %d", Tong);

    return 0;
}
