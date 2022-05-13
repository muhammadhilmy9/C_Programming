#include <stdio.h>
int n;
int pos=0;
struct data
{
	char nama[100];
	int nim;
};
main()
{
	printf("Nama : MUHAMMAD HILMY ANSHORUDDIN\n");
	printf("NIM  : 1102174233\n");
	printf("Masukkan Banyak Mahasiswa : ");scanf("%i",&n);
	struct data mhs[n];
	inputData(mhs);
	pos=0;
	printf("\nOUTPUT : \n");
	outputData(mhs);
}
inputData(struct data mhsnow[])
{
	printf("Data ke-%i \n",pos+1);
	printf("Nama : ");getchar();gets(mhsnow[pos].nama);
	printf("NIM  : ");scanf("%i",&mhsnow[pos].nim);
	pos++;
	if(pos<n)
	{
		inputData(mhsnow);
	}
}
outputData(struct data mhsnow[])
{
	printf("Data ke-%i \n",pos+1);
	printf("Nama : %s\n",mhsnow[pos].nama);
	printf("NIM  : %i\n",mhsnow[pos].nim);
	pos++;
	if(pos<n)
	{
		outputData(mhsnow);
	}
}
