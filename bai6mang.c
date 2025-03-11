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
    printf("Mang sau khi thay gia tri am bang 0 la: ");
    for (i=1; i<=n; i++){
        if (A[i]<0){
            A[i]=0;
            printf("%d ", A[i]);
        }else printf("%d ", A[i]);
    }
    return 0;
}
