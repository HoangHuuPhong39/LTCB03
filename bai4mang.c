#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, Max, Min, i, a, b;
    printf("Nhap vao so phan tu muon nhap: ");
    scanf("%d", &n);
    int A[n];

    printf("Nhap so nguyen: ");
    for (int i=1; i<=n; i++)
    {
        scanf("%d", &A[i]);

    }
    Max = A[1];
    for (i=1; i<=n ; i++)
    {
        if ( A[i]>=Max )
        {
            Max = A[i];
            a = i;
        }
        else
        {
            Max = Max;
        }
    }
    Min = A[1];
    for (i=1; i<=n ; i++)
    {
        if ( A[i]<=Min )
        {
            Min = A[i];
            b = i;
        }
        else
        {
            Min = Min;
        }
    }
    printf("So lon nhat trong mang la: %d va vi tri la: %d \n", Max, a);
    printf("So nho nhat trong mang la: %d va vi tri la: %d \n", Min, b);
    return 0;
}
