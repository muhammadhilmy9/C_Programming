#include <stdio.h>
#include <stdlib.h>

main()
{
struct index{
	char nama[30],nim[12];
	int nilai;
}
	i;
	printf("-----MENGINDEKS NILAI-----\n");
	printf("input\n");
	printf("\n Nama		   : ");
	gets(i.nama);
	printf(" NIM	           : ");
	gets(i.nim);
	printf(" Nilai	           : ");
	scanf("%i",&i.nilai);
	printf("output\n");
		if(i.nilai<=100 & & i.nilai>= 80){
			printf("\n Nama	       	   : %s",i.nama);
			printf("\n NIM	       	   : %s",i.nim);
			printf("\n Indeks            : A");
	    }
		if(i.nilai<80 & & i.nilai>=70){
			printf("\n Nama	       	   : %s",i.nama);
			printf("\n NIM	       	   : %s",i.nim);
			printf("\n IndekS            : AB");
		}
		if(i.nilai<70 & & i.nilai>=65){
			printf("\n Nama	           : %s",i.nama);
			printf("\n NIM	           : %s",i.nim);
			printf("\n IndekS            : B");
		}
		if(i.nilai<65 & & i.nilai>=60){
			printf("\n Nama            : %s",i.nama);
			printf("\n NIM	           : %s",i.nim);
			printf("\n IndekS            : BC");
		}
		if(i.nilai<60 & & i.nilai>=50){
			printf("\n Nama	           : %s",i.nama);
			printf("\n NIM	       	   : %s",i.nim);
			printf("\n IndekS            : C");
		}
		if(i.nilai<50){
			printf("\n Nama	       	   : %s",i.nama);
			printf("\n NIM	           : %s",i.nim);
			printf("\n IndekS            : E");
		}
		if(i.nilai>100){
			printf("Masukkan nilai dengan benar!!");
		}

    return 0;
}
