#include<stdio.h>
#include<stdlib.h>

    long long gt(int n){
        if ( n==0 || n==1)
            return 1;
        return n* gt(n-1);
    }

int main (){
    int n;
    printf("Nhap vao gia tri n: ");
    scanf("%d", &n);
    printf("Gia tri %d!= %lld", n, gt(n));
    return 0;
}
