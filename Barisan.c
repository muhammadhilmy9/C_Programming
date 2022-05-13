#include <stdio.h>
void bil(int p,int q,int r,int s);
main()
{
	int a,b=0,c,d=0;
	printf("NAMA : MUHAMMAD HILMY ANSHORUDDIN");
	printf("\nNIM  : 1102174233");
	printf("\n");
	printf("\nBanyak Angka	: "); scanf("%d",&a);
	printf("\nBarisan		: ");
	bil(a,b,c,d);
}
void bil(int m,int n,int o,int p)
{
	while(o<m)
	{
		printf("%d ",n);
		p=p+n;
		n=n+2;
		o++;
	}
	printf("\nJumlah		: %d",p);
}
