#include<stdio.h>

int main(){
    int i=2014, n;
    float x1, x2, p;
    printf("Nhap vao nam gdp nam 2014 va toc do tang truong: ");
    scanf("%f%f", &x1, &p);
    printf("\t Nam \t \t GDP \n");
    printf("\t %d \t \t %.3f\n", i,x1);
    x2=x1;
    for (i=2015; i<=2025; i++){
        x2 = x2*p;
        printf("\t %d \t \t %.3f\n", i, x2);
        if ( x2 > 2*x1 ) { break;}
    }
    return 0;
}
