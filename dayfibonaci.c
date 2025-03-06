#include<stdio.h>
#include<math.h>

int main (){
    int i=3, n, tg;
    printf("Nhap vao so thu n trong day fibonaci: ");
    scanf("%d", &n);
    int f3, f2=1, f1=1;

    while(i<=n){
    f3 = f2 + f1;
    f1 = f2;
    f2 = f3;
    i++;
    }
    printf("Gia tri cua so thu %d la: %d\n", n, f3);
    return 0;
}
