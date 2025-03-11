#include <stdio.h>
#include <stdlib.h>

int td(const void *x, const void *y){
    return ( *(int*)x - *(int*)y );
}
int gd(const void *x, const void *y){
    return ( *(int*)y - *(int*)x );
}

int main (){
    int n, i, a;
    printf("Nhap vao so phan tu muon nhap: ");
    scanf("%d", &n);
    int A[n];

    printf("Nhap so nguyen: ");
    for (i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    printf("Mang vua nhap la: ");
    for(i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Mang sap xep tang dan : ");
    qsort(A, n, sizeof(int), td);
    for( i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Mang sap xep giam dan : ");
    qsort(A, n, sizeof(int), gd);
    for( i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
