#include<stdio.h>

int main (){
    int n, m, x, y;
    printf("Nhap vao so hang va so cot cua 2 ma tran: ");
    scanf("%d%d%d%d", &n, &m, &x, &y);
    int a[n][m], b[x][y];
    if (n!=x && m!=y)
        return 0;
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            printf("Nhap vao phan tu A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran 1 la: \n");
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            printf("%d\t", a[i][j]);
        }printf("\n");
    }
    for ( int i = 0; i < x; i++){
        for ( int j = 0; j < y; j++){
            printf("Nhap vao phan tu A[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Ma tran 2 la: \n");
    for ( int i = 0; i < x; i++){
        for ( int j = 0; j < y; j++){
            printf("%d\t", b[i][j]);
        }printf("\n");
    }
    int sum[n][m];
    printf("Tong 2 ma tran trên la: \n");
     for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t", sum[i][j]);
        }printf("\n");
     }
    return 0;
}
