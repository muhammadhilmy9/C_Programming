#include <stdio.h>
int main()
{
	int o,p,x,y,z;
	printf("Nama  : MUHAMMAD HILMY ANSHORUDDIN\n");
	printf("NIM   : 1102174233\n");
	printf("jumlah baris : ");scanf("%d",&o);
	printf("jumlah kolom : ");scanf("%d",&p);
	int a[o][p];
	int b[p][o];
	printf("\n");
	for(x=0;x<o;x++)
	{
		for(y=0; y<p; y++)
	{
	printf("Elemen[%d][%d] : ",x,y);scanf("%d",&a[x][y]);
	}
}
	for (x=0; x<p; x++)
	{
		for(y=0; y<o; y++)
	{
	b[x][y]=a[y][x];
	}
}
	printf("Matriks\n");
	for(x=0; x<o; x++)
{
	for(y=0;y<p;y++)
	{
		printf("%3d",a[x][y]);
	}
	printf("\n");
} 
	printf("\nMatriks Transpose\n");
	for(x=0;x<p;x++)
	{
		for(y=0;y<o;y++)
		{
		printf("%3d",b[x][y]);
		}
	printf("\n");
	}
}
