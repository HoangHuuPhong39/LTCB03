#include <stdio.h>

int gtln(int *a, int n){
    int *ptr = a;
    int max = *ptr;
    for (int i = 0; i < n; i++){
        ptr++;
        if (*ptr >= a){
            max = *ptr;
        }
    }return max;
}

int main(){
    int n, i;
    printf("Nhap vao so phan tu co trong mang: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap vao cac phan tu trong mang: ");
    for (i = 0; i < n; i++){
        scanf("%d", a + i);
    }
    gtln(a, n);
    printf("Gia tri lon nhat trong mang la: %d", gtln(a, n));
    return 0;
}
