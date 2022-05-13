#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
    char nama[30],nim[20],ttl[30],email[20],nama2[20],nim2[20];
    int a=1;

    printf("Menu Registrasi : ");
    printf("\n\nNama : ");gets(nama);
    printf("NIM : ");gets(nim);
    printf("TTL : ");gets(ttl);
    printf("E-Mail : ");gets(email);
while(a<=6){
    printf("\nMenu Login : ");
    printf("\nNama : ");gets(nama2);
    printf("NIM : ");gets(nim2);
    if ((strcmp(nama2,nama)==0)&&(strcmp(nim2,nim)==0))
    {
        printf("LOGIN BERHASIL");
        a=a+6;
    }
    else
    {
        printf("LOGIN GAGAL");
        a=a;
    }
}
}
