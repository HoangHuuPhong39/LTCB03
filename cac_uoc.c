#include<stdio.h>

int main()
{
    int a, i;
    printf("Nhap vao so can xet: ");
    scanf("%d", &a);
    printf("Cac uoc cua a la: ");
    for (i=1; i<=a; i++)
    {
        if (a%i==0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
