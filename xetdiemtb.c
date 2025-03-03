#include <stdio.h>

 int main(){
     float a;
     printf("Nhap diem: ");
     scanf("%f", &a);

     if ( a<5 ) printf("Xep loai yeu");
     else
        if ( a<7) printf("Xep loai TB");
        else
            if (a<8) printf("Xep loai kha");
            else
                if (a<9) printf("Xep loai gioi");
                else printf("Xep loai xuat sac");
    return 0;
 }
