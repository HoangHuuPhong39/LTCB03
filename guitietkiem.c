#include <stdio.h>

int main ()
{
    int A, a;
    int n=1;
    float p=0.0045, S;
    printf("Nhap vao so tien gui tiet kiem: ");
    scanf("%d", &A);
    a=A;
    do
    {
        S = A*(1+p);
        A = S;
        n++;
    }
    while ( S <= 2*a );
    printf("Sau %d thang thi nguoi do co the rut de nhan lai so tien nguoi do gui vao\n", n);
    printf("So tien nguoi do nhan duoc la: %.3f", S);
    return 0;
}
