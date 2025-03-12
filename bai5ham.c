#include <stdio.h>
#include <stdlib.h>

void doicoso(int n, int base)
{
    if (n==0) return 1;
    doicoso(n / base, base);
    printf("%d", n % base);
}

int main ()
{
    int n;
    printf("Nhap vao so can doi co so: ");
    scanf("%d", &n);
    printf("So %d doi sang he nhi phan la: ", n);
    doicoso(n, 2);
    printf("\nSo %d doi sang he bat phan la: ", n);
    doicoso(n, 8);
    printf("\nSo %d doi sang he thap luc phan la: ", n);
    doicoso(n, 16);
    return 0;
}
