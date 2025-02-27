#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, x1, x2, delta;
    printf ("nhap vao cac so a, b va c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    if ( a==0 ){
        x1 = (float)-c/b;
        printf ("phuong trinh co 1 nghiem: %.2lf", x1);
    }
    delta = (b*b)-4*a*c;
    if ( delta == 0 ){
        x1 = (float)-b/(2*a);
        printf("phuong trinh co nghiem kep: %.2lf", x1);
    }
    if ( delta < 0 ) printf ("phuong trinh vo nghiem");
    if ( delta > 0 ){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("phuong trinh co 2 nghiem phan biet: x1 = %.2lf\n                                    x2 = %.2lf", x1, x2);
    }
    return 0;
}