#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Disusun Oleh : Muhammad Hilmy Anshoruddin\n");
    printf("               1102174233\n");
    printf("               EL-41-03\n\n");
    int a,b,c,d;

    printf("Mengkonversi detik menjadi jam, menit,dan detik  :\n\n  ");
    printf("Jumlah detik : ");
    scanf("%d",&a);
    c=a/3600;
    d=a%3600;
    b=d/60;
    d=d%60;

    printf("Jam = %d", c); printf("\n");
    printf("Menit = %d", b); printf("\n");
    printf("Detik = %d", d); printf("\n");

}
