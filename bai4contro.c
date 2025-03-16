#include <stdio.h>

int tangdan( const void *x, const void *y){
    return (*(int*)x - *(int*)y);
}

int main (){
    int n, i;
    printf("Nhap vao so phan tu trong mang: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap vao cac phan tu trong mang: ");
    for ( i = 0; i < n; i++){
        scanf("%d", a + i);
    }
    printf("mang duoc sap xep tang dan la: ");
    qsort(a, n, sizeof(int), tangdan);
    for ( i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
