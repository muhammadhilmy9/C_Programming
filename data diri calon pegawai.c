#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Disusun Oleh : Muhammad Hilmy Anshoruddin\n\n");
    printf("               1102174233\n\n");
    printf("               EL-41-03\n\n");
    char Nama[50];
    char NIK[50];
    char Kelamin[50];
    char Email[50];
    char Telepon[50];
    printf("Nama          :");
    gets(Nama);
    printf("NIK           :");
    gets(NIK);
    printf("Jenis Kelamin :");
    gets(Kelamin);
    printf("Email         :");
    gets(Email);
    printf("Nomor Telepon :");
    gets(Telepon);
    printf("\n\n");
    printf("Data Diri Calon Pegawai \n");
    printf("Nama              : %s", Nama); printf("\n");
    printf("NIK               : %s", NIK); printf("\n");
    printf("Jenis Kelamin     : %s", Kelamin); printf("\n");
    printf("Email             : %s", Email); printf("\n");
    printf("Nomor Telepon     : %s", Telepon); printf("\n");
}
